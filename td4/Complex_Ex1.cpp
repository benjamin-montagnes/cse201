#include<iostream>


class Complex {
private:
  double real;        // the real part
  double imaginary;   // the imaginary part

  public:
    // construct the complex number zero
    Complex() {
      real=0;
      imaginary=0;
     }


    // construct a complex number with given real and imaginary parts
    Complex(double r, double i){
      real = r;
      imaginary = i;
    }

    ~Complex(){std::cout << "Destroying number "<<real<<" + "<<imaginary<<" * i"<<std::endl;}
};

int main() {
  Complex c(1,2);
  Complex a(3,0);
  Complex b;
  return 0;
};