//
//  Cow.cpp
//  12.1_Ex
//
//  Created by Дмитрий Цюрко on 24.05.2023.
//

#include "Cow.hpp"
#include <iostream>
Cow::Cow(){
    name[0] = '\0';
    hobby = new char[1];
    hobby[0] = '\0';
    weight = 0;
}
Cow::Cow(const char * nm, const char * ho, double wt){
    std::strncpy(name, nm, 20);
    hobby = new char [std::strlen(ho) + 1];
    std::strcpy(hobby, ho);
    weight = wt;
}
Cow::Cow(const Cow & c){
    std::strncpy(name, c.name, 20);
    hobby = new char[std::strlen(c.hobby) + 1];
    std::strcpy(hobby, c.hobby);
    weight = c.weight;
}
Cow::~Cow(){
    delete []hobby;
}
Cow & Cow::operator = (const Cow & c){
    if(this == &c)
        return *this;
    delete []hobby;
    
    std::strncpy(name, c.name, 20);
    hobby = new char[std::strlen(c.hobby) + 1];
    std::strcpy(hobby, c.hobby);
    weight = c.weight;
    return  * this;
}
void Cow::ShowCow()const{
    std::cout << "Имя: " << name << std::endl;
    std::cout << "Хобби " << hobby << std::endl;
    std::cout <<  "Вес: " << weight << std::endl;
}
