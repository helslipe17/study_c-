//
//  person.cpp
//  10.2
//
//  Created by Дмитрий Цюрко on 02.05.2023.
//

#include "person.hpp"
#include <iostream>
Person::Person(const std::string & ln, const char * fh){
    lname = ln;
    std::strncpy(fname, fh, 24 );
    fname[24] = '\0';
}
void Person::Show() const{
    std::cout << fname << " " << lname << std::endl;
}
void Person::FormalShow() const{
    std::cout << lname << " " << fname << std::endl;
}
