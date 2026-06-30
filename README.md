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

Respuesta: 
Porque 


### 2. ¿Por qué `operator+` puede implementarse como función no miembro?

Respuesta:

### 3. ¿Por qué `operator<<` debe implementarse como función no miembro?

Respuesta:

### 4. ¿Qué significa que un método sea `const`?

Respuesta:

### 5. ¿Qué invariante debe mantener la clase `Fraction`?

Respuesta:

### 6. ¿Qué debe ocurrir si se intenta construir una fracción con denominador cero?

Respuesta:

### 7. ¿Por qué `operator>>` no debe modificar el objeto si la entrada es inválida?

Respuesta:
# operatorsCpp
