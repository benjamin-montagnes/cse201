#pragma once
#include<iostream>

class Complex {
private:
  double real;        // the real part
  double imaginary;   // the imaginary part

  public:
    // construct the complex number zero
    Complex();


    // construct a complex number with given real and imaginary parts
    Complex(double r, double i);

    double getReal();             // get the real part of the number
    double getImaginary();      // get the imaginary part of the number
    void setReal(double re);      // set the value of the real part
    void setImaginary(double im); // set the value of the imaginary part

    double magnitude();           // computes the distance from the complex origin

    /*
    modifies the number so its magnitude becomes 1
    but it stays in the same direction from the complex origin, if possible. In other
    words, project the original number onto the unit circle. If that operation is not possible, the complex number must be left unchanged.
    */
    void normalize();

    ~Complex(){std::cout << "Destroying number "<<real<<" + "<<imaginary<<" * i"<<std::endl;}
};
