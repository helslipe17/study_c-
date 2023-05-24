//
//  strngbad.cpp
//  12.1_Study
//
//  Created by Дмитрий Цюрко on 15.05.2023.
//

#include "strngbad.hpp"
#include <cstring>

using std::cout;
int StringBad::num_strings = 0;

StringBad::StringBad(const char * s){
    len = int(std::strlen(s));
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
    cout << num_strings << ": обьект \"" << str << "\" создан" << std::endl;
}
StringBad::StringBad(){
    len = 4;
    str = new char[4];
    std::strcpy(str, "C++");
    num_strings++;
    cout << num_strings << ": обьект по умолчанию \"" << str << "\" создан" << std::endl;
}
StringBad::~StringBad(){
    cout << "Обьект \"" << str << "\" удален, ";
    --num_strings;
    cout << num_strings << " осталось\n";
    delete []str;
}
std::ostream & operator <<(std::ostream & os, const StringBad & st){
    os << st.str;
    return os;
}
