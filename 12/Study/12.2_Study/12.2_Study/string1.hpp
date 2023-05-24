//
//  string1.hpp
//  12.2_Study
//
//  Created by Дмитрий Цюрко on 18.05.2023.
//

#ifndef string1_hpp
#define string1_hpp

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
// статическая функция
    static int HowMany();
};

#endif /* string1_hpp */
