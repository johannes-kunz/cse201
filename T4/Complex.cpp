#include "Complex.hpp"

Complex::Complex(){
  imaginary = real = 0.0;
}

// construct a complex number with given real and imaginary parts
Complex::Complex(double real, double imaginary){
  this->imaginary = imaginary;
  this->real = real;
}
Complex::~Complex(){
  std::cout << "Destroying " << real << " + " << imaginary << " * i" << std::endl;
}

double Complex::getReal(){
  return real;
}           // get the real part of the number
double Complex::getImaginary(){
  return imaginary;
}        // get the imaginary part of the number
void Complex::setReal(double re){
  real = re;
}      // set the value of the real part
void Complex::setImaginary(double im){
  imaginary = im;
} // set the value of the imaginary part

double Complex::magnitude(){
  return sqrt(pow(real,2)+pow(imaginary,2));
}           // computes the distance from the complex origin

/*
   modifies the number so its magnitude becomes 1
   but it stays in the same direction from the complex origin, if possible. In other
   words, project the original number onto the unit circle. If that operation is not possible, the complex number must be left unchanged.
*/
void Complex::normalize(){
  double magnitude = this->magnitude();
  real /= magnitude;
  imaginary /= magnitude;
}
