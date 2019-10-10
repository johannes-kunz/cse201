#include <iostream>
#include <cmath>

class Complex {
private:
  double real;        // the real part
  double imaginary;   // the imaginary part

  public:
    // construct the complex number zero
    Complex(){
      imaginary = real = 0.0;
    }

    // construct a complex number with given real and imaginary parts
    Complex(double real, double imaginary){
      this->imaginary = imaginary;
      this->real = real;
    }
    ~Complex(){
      std::cout << "Destroying " << real << " + " << imaginary << " * i" << std::endl;
    }

    double getReal(){
      return real;
    }           // get the real part of the number
    double getImaginary(){
      return imaginary;
    }        // get the imaginary part of the number
    void setReal(double re){
      real = re;
    }      // set the value of the real part
    void setImaginary(double im){
      imaginary = im;
    } // set the value of the imaginary part

    double magnitude(){
      return sqrt(pow(real,2)+pow(imaginary,2));
    }           // computes the distance from the complex origin

    /*
       modifies the number so its magnitude becomes 1
       but it stays in the same direction from the complex origin, if possible. In other
       words, project the original number onto the unit circle. If that operation is not possible, the complex number must be left unchanged.
    */
    void normalize(){
      double magnitude = this->magnitude();
      real /= magnitude;
      imaginary /= magnitude;
    }
};
