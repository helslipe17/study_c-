//
//  Plorg.cpp
//  10.7
//
//  Created by Дмитрий Цюрко on 05.05.2023.
//

#include "Plorg.hpp"
#include <iostream>
Plorg::Plorg(const char *n, int i){
    strcpy(name, n);
    CI = i;
}
void Plorg::newci(int c){
    CI = c;
}
void Plorg::showplorg(){
    std::cout << "Name: " << name << " have ci = " << CI << "\n";
}
