#include "golf.hpp"
#include <iostream>

Golf::Golf(const char * name, int hc){
    std::strncpy(fullname, name, 39);
    fullname[39] = '\0';
    handicap = hc;
}
int Golf::setgolf(){
    int x = 0;
        std::cout <<"Введите полное имя: ";
        std::cin.sync();
        std::cin.get(fullname, LEN);
    if(strlen(fullname)>0){
        x = 1;
        int hc = 0;
        std::cout << "Введите гандикап: ";
        std::cin >>hc;
        Golf temp(fullname, hc);
        *this = temp;
        }
    return x;
}
void Golf::showgolf(){
    std::cout <<"Полное имя пользователя: " << fullname << std::endl;
    std::cout <<"Гандикап: " << handicap << std::endl;
}
