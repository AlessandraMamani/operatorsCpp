#include "Fraction.h"

#include <iostream>
#include <numeric>
#include <stdexcept>

Fraction::Fraction(int numerator, int denominator)
  : numerator(numerator), denominator(denominator) {
  //this->numerador = numerador;  -| es lo mismo que arriba :v
  if(denominator == 0)
    throw std::invalid_argument("denominator cannot be zero");//recuperable de este estado (throw)

  normalize();
}

//--- num / 1
Fraction::Fraction(int numerator)
  : Fraction(numerator, 1) { 
}

int Fraction::num() const {
  return numerator;
}

int Fraction::den() const {
  return denominator;
}

void Fraction::normalize(){
  // TODO: normalizar la fraccion.
  // Sugerencia:
  // 1. Si denominator < 0, mover el signo al numerador.
  // 2. Usar std::gcd para reducir numerator y denominator.
    if(denominator < 0){
        numerator *= -1;
        denominator *= -1; 
    }
}
    int gcd = std::gcd(numerator, denominator)
    if (gcd != 0){
        numerator /= gcd;
        denominator /=gcd;
    }
Fraction& Fraction::operator+=(const Fraction& other){
  // TODO: implementar suma compuesta. 
  // a/b + c/d = (a*d + c*b) / (b*d)
    numerator = numerator * other.denominator + other.numerator * denominator;
    denominator = denominator * other.denominator;
    normalize();
  //(void)other;
  return *this;
}

Fraction& Fraction::operator-=(const Fraction& other){
  // TODO: implementar resta compuesta.
  numerator = numerator * other.denominator - other.numerator * denominator;
  denominator = denominator * other.denominator;
  //(void)other;
  normalize();
  return *this;
}

Fraction operator+(Fraction a, const Fraction& b){
  // TODO: reutilizar operator+=.
  a += b;
  //(void)b;
  return a;
}

Fraction operator-(Fraction a, const Fraction& b){
  // TODO: reutilizar operator-=.
  a -=b;
  //(void)b;
  return a;
}

Fraction operator*(const Fraction& a, const Fraction& b){
  // TODO: implementar multiplicacion.
  //numerator = numerator * other.numerator;
  //denominator = numerator * other.denominator;
  //normalize();
  //(void)a;
  //(void)b;
  //return Fraction(0, 1);
    return Fraction(a.num() * b.num(), a.den() * b.den());
}

Fraction operator/(const Fraction& a, const Fraction& b){
  // TODO: implementar division y rechazar division por fraccion cero.
  /*(void)a;
  (void)b;
  return Fraction(0, 1);
    */
    if(b.num() == 0)
        throw std::inva
    return Fraction(a.num() * b.den(), a.den() * a.num());
}

bool operator==(const Fraction& a, const Fraction& b){
  // TODO: implementar igualdad.
  (void)a;
  (void)b;
  return false;
}

bool operator!=(const Fraction& a, const Fraction& b){
  // TODO: implementar usando operator==.
  (void)a;
  (void)b;
  return false;
}

bool operator<(const Fraction& a, const Fraction& b){
  // TODO: implementar usando productos cruzados.
  (void)a;
  (void)b;
  return false;
}

bool operator<=(const Fraction& a, const Fraction& b){
  // TODO: implementar usando operator< y operator==.
  (void)a;
  (void)b;
  return false;
}

bool operator>(const Fraction& a, const Fraction& b){
  // TODO: implementar usando operator<.
  (void)a;
  (void)b;
  return false;
}

bool operator>=(const Fraction& a, const Fraction& b){
  // TODO: implementar usando operator<.
  (void)a;
  (void)b;
  return false;
}

std::ostream& operator<<(std::ostream& os, const Fraction& f){
  // TODO: imprimir con el formato numerador/denominador.
  (void)f;
  return os;
}

std::istream& operator>>(std::istream& is, Fraction& f){
  // TODO: leer con el formato numerador/denominador.
  // Si la entrada es invalida, marcar failbit y no modificar f.
  (void)f;
  return is;
}
