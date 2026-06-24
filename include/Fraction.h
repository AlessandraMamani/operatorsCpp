#ifndef FRACTION_H
#define FRACTION_H

#include <iosfwd>

class Fraction {
private:
  int numerator;
  int denominator;

  void normalize();

public:
  Fraction(int numerator, int denominator);
  explicit Fraction(int numerator);

  int num() const;
  int den() const;

  Fraction& operator+=(const Fraction& other);
  Fraction& operator-=(const Fraction& other);
};

Fraction operator+(Fraction a, const Fraction& b);
Fraction operator-(Fraction a, const Fraction& b);
Fraction operator*(const Fraction& a, const Fraction& b);
Fraction operator/(const Fraction& a, const Fraction& b);

bool operator==(const Fraction& a, const Fraction& b);
bool operator!=(const Fraction& a, const Fraction& b);
bool operator<(const Fraction& a, const Fraction& b);
bool operator<=(const Fraction& a, const Fraction& b);
bool operator>(const Fraction& a, const Fraction& b);
bool operator>=(const Fraction& a, const Fraction& b);

std::ostream& operator<<(std::ostream& os, const Fraction& f);
std::istream& operator>>(std::istream& is, Fraction& f);

#endif
