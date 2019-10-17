
#include <iostream>
#include "Complex.hpp"

int main() {
  Complex c1;
  Complex c2 = Complex(3,4);
  Complex c3 = Complex(2,3);

  Complex::printMaxComplex();

  c3.setReal(5);
  Complex::printMaxComplex();

  Complex c4 = Complex::fromMax();
  c4.setImaginary(c4.getImaginary() + 1);
  c4.setImaginary(0);

  Complex::printMaxComplex();
}
