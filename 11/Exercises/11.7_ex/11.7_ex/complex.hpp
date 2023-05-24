//
//  complex.hpp
//  11.7_ex
//
//  Created by Дмитрий Цюрко on 14.05.2023.
//

#ifndef complex_hpp
#define complex_hpp

#include <stdio.h>
#include <iostream>
class Complex{
private:
    double x;
    double y;
public:
    Complex();
    Complex(double n1, double n2);
    ~Complex();
    friend Complex operator+(const Complex & t1, const Complex & t2);
    friend Complex operator-(const Complex & t1, const Complex & t2);
    friend Complex operator*(const Complex & t1, const Complex & t2);
    friend Complex operator*(double n, const Complex & t2);
    friend Complex operator*(const Complex & t1, double n);
    friend Complex operator~(const Complex & c);
    friend std::istream & operator>>(std::istream & is, Complex & t);
    friend std::ostream & operator<<(std::ostream & os, const Complex & c);
};
#endif /* complex_hpp */
