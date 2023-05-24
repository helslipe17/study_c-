//
//  complex.cpp
//  11.7_ex
//
//  Created by Дмитрий Цюрко on 14.05.2023.
//

#include "complex.hpp"

Complex::Complex(){
    x = 0;
    y = 0;
}
Complex::Complex(double n1, double n2){
    x = n1;
    y = n2;
}
Complex::~Complex(){}

Complex operator+(const Complex & t1, const Complex & t2){
    Complex result(t1.x + t2.x, t1.y + t2.y);
    return result;
}
Complex operator-(const Complex & t1, const Complex & t2){
    Complex result(t1.x - t2.x, t1.y - t2.y);
    return result;
}
Complex operator*(const Complex & t1, const Complex & t2){
    Complex result(t1.x * t2.x, t1.y * t2.y);
    return result;
}
Complex operator*(double n, const Complex & t2){
    Complex result(t2.x * n, t2.y * n);
    return result;
}
Complex operator*(const Complex & t1, double n){
    Complex result(t1.x * n, t1.y * n);
    return result;
}
Complex operator~(const Complex & c){
    Complex result(c.x, -c.y);
    return result;
}
std::istream & operator>>(std::istream & is, Complex & t){
    std::cout << "действительная часть :";
    is >> t.x;
    if(t.x){
        std::cout << "мнимая часть :";
        is >> t.y;
    }
    return is;
}
std::ostream & operator<<(std::ostream & os, const Complex & c){
    os << "(" << c.x << ", " << c.y << "i)";
    return os;
}
