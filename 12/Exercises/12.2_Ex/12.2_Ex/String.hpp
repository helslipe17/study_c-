//
//  String.hpp
//  12.2_Ex
//
//  Created by Дмитрий Цюрко on 24.05.2023.
//

#ifndef String_hpp
#define String_hpp

#include <stdio.h>
#include <iostream>
using std::istream;
using std::ostream;

class String{
private:
    char * str;
    int len;
    static int num_strings;
    static const int CINLIM = 80;
public:
// конструкторы и другие методы
    String(const char * s);
    String();
    String(const String & st);
    ~String();
    int length(){return len;}
    void stringup();
    void stringlow();
    int has(char ch);
// методы перегруженных операций
    String & operator=(const String &);
    String & operator=(const char *);
    char & operator[](int i);
    const char & operator[](int i) const;
// дружественные функции перегруженных операций
    friend bool operator < (const String &st1, const String  &st2);
    friend bool operator > (const String &st1, const String  &st2);
    friend bool operator == (const String &st1, const String  &st2);
    friend ostream & operator << (ostream & os, const String &st);
    friend istream & operator >> (istream & is, String &st);
    friend String operator+(const String & st1, const String & st2);
    friend String operator+(const char * st, const String & st2);
// статическая функция
    static int HowMany();
};
#endif /* String_hpp */
