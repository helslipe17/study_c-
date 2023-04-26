#include "golf.hpp"
#include <iostream>

void setgolf(golf &g, const char * name, int hc){
    strcpy(g.fullname, name);
    g.handicap = hc;
}
int setgolf(golf & g){
    int x = 0;
    std::cout <<"Введите полное имя: ";
    std::cin.get(g.fullname, LEN);
    if(strlen(g.fullname)>0){
        x = 1;
        std::cout << "Введите гандикап: ";
        std::cin >>g.handicap;
    }
    return x;
}
void handicap(golf & g, int hc){
    g.handicap = hc;
}
void showgolf(const golf &g){
    std::cout <<"Полное имя пользователя: " << g.fullname << std::endl;
    std::cout <<"Гандикап: " << g.handicap << std::endl;
}


