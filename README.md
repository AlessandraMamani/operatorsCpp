# Práctica: Sobrecarga de operadores en C++

Este repositorio contiene el código base para implementar una clase `Fraction`.
El objetivo es estudiar constructores, invariantes, métodos `const` y sobrecarga de operadores como funciones miembro y funciones no miembro.

## Estructura

```text
.
|-- Makefile
|-- README.md
|-- include
|   `-- Fraction.h
|-- src
|   `-- Fraction.cc
`-- tests
    `-- main.cc
```

## Compilar

```bash
make
```

## Ejecutar pruebas

```bash
make run
```

Al inicio, varias pruebas fallarán porque `src/Fraction.cc` contiene funciones marcadas con `TODO`.
La meta del laboratorio es completar esas funciones hasta que todas las pruebas pasen.

## Limpiar

```bash
make clean
```

## Tareas principales

Complete la implementación de:

- `normalize()`
- `operator+=` y `operator-=` como funciones miembro
- `operator+`, `operator-`, `operator*` y `operator/` como funciones no miembro
- operadores de comparación
- `operator<<`
- `operator>>`

## Preguntas conceptuales

Responda estas preguntas en este mismo archivo, debajo de cada enunciado.

### 1. ¿Por qué `operator+=` se implementa naturalmente como función miembro?

Porque modeifica directamente el objeto que esta a la izquierda del operador. Esta expresion a+=b se interptreta como a.operator+=(b), donde a es el objeto receptor (*this). Implementando como funcion mienbro hace explicito que es el objeto izquierdo el que cambia de estado.

### 2. ¿Por qué `operator+` puede implementarse como función no miembro?

Porque no modifica ninguno de sus dos operandos. Recibe a por valor, y la modifica internamente con +=, devolviendo el resultado. Al no acceder directamente a las partes privadas y no alterar ningun operando original.

### 3. ¿Por qué `operator<<` debe implementarse como función no miembro?

Porque el operando izquierdo es un objeto de tipo std::ostream, no una Fraction. Una funcion miembro de Fraction solo puede tener a Fraction como operando izquiero implicito, por lo que no es posible escribir std::cout << f.

### 4. ¿Qué significa que un método sea `const`?

Significa que el metodo no modifica el estado del objeto sobre el que se invoca. Garantizando que no se modifique ningun atributo.

### 5. ¿Qué invariante debe mantener la clase `Fraction`?

El denominador no debe ser cero, denominador != 0.

### 6. ¿Qué debe ocurrir si se intenta construir una fracción con denominador cero?

El constructor debe rechazar esta operacion lanzando una excepcion. Impidiendo que exita un objeto Fracion en estado invalido.

### 7. ¿Por qué `operator>>` no debe modificar el objeto si la entrada es inválida?

Para mantener el invariante de la clase. Sila lectura falla, el objeto que se pasa como referencia debe quedarse en su estado anterior, es decir, valido. Modificarlo creria un estado de incosistencia.

# operatorsCpp
