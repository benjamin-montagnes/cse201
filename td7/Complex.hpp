#pragma once
#include <iostream>

template <typename T> class Complex {
    private:
        T real;
        T imaginary;
    public:
        Complex(T real, T imaginary){
            this->real = real;
            this->imaginary = imaginary;
        };

        Complex operator+(const Complex &other){
            return Complex(real + other.real, imaginary + other.imaginary);
        };

        Complex operator-(const Complex &other){
            return Complex(real - other.real, imaginary - other.imaginary);
        };

        Complex operator*(const Complex &other){
            return Complex(real * other.real - imaginary*other.imaginary,real * other.imaginary + imaginary*other.real);
        };

        void print(){
            if (imaginary<0) std::cout << real << imaginary << "*i" << std::endl;
            else std::cout << real << "+" << imaginary << "*i" << std::endl;
        }
};