#include "Complex.hpp"

Complex Complex::maxComplex;

Complex::Complex(){
  imaginary = real = 0.0;

}

// construct a complex number with given real and imaginary parts
Complex::Complex(double real, double imaginary){
  this->imaginary = imaginary;
  this->real = real;
  if(maxComplex.magnitude() < this->magnitude()){
    maxComplex = *this;
  }
}
Complex::~Complex(){
  //std::cout << "Destroying " << real << " + " << imaginary << " * i" << std::endl;
}

double Complex::getReal(){
  return real;
}           // get the real part of the number
double Complex::getImaginary(){
  return imaginary;
}        // get the imaginary part of the number
void Complex::setReal(double re){
  real = re;
  if(maxComplex.magnitude() < this->magnitude()){
    maxComplex = *this;
  }
}      // set the value of the real part
void Complex::setImaginary(double im){
  imaginary = im;
  if(maxComplex.magnitude() < this->magnitude()){
    maxComplex = *this;
  }
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

Complex Complex::fromMax(){
  return maxComplex;
}

void Complex::print(){
  std::cout << "(" << real << "," << imaginary << ")" << std::endl;
}

void Complex::printMaxComplex(){
  maxComplex.print();
}



Complex Complex::operator-(){
  return Complex(-this->real, -this->imaginary);
}                    // complex negation

Complex Complex::operator+(const Complex &other){
  return Complex(this->real + other.real, this->imaginary + other.imaginary);
} // complex addition
Complex Complex::operator-(const Complex &other){
  return Complex(this->real - other.real, this->imaginary - other.imaginary);
} // complex subtraction
Complex Complex::operator*(const Complex &other){
  return Complex(this->real * other.real - this->imaginary * other.imaginary,
    this->imaginary * other.real + this->real * other.imaginary);
} // complex multiplication

bool Complex::operator==(const Complex &other){
  return this->real == other.real && this->imaginary == other.imaginary;
}   // pointwise comparison
bool Complex::operator!=(const Complex &other){
  return this->real != other.real || this->imaginary != other.imaginary;
}   // inverse of above
