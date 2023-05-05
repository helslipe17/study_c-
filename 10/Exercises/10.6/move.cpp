//
//  move.cpp
//  10.6
//
//  Created by Дмитрий Цюрко on 04.05.2023.
//

#include "move.hpp"
#include <iostream>
Move::Move(double a, double b){
    x = a;
    y = b;
}
void Move::showmore()const{
    std::cout << "x = " << x << ", y = " << y << "\n";
}
Move Move::add(const Move & m){
    x += m.x;
    y += m.y;
    return *this;
}
void Move::reset(double a, double b){
    x = a;
    y = b;
}
