//
//  Bank.cpp
//  test-project
//
//  Created by Дмитрий Цюрко on 02.05.2023.
//
#include <iostream>
#include "Bank.hpp"
Bank::Bank(){
    std::cout << "Вызван конструктор по умолчанию\n";
    name = "Без имени";
    id = "Без id";
    balance = 0;
}
Bank::Bank(const char * a, const char * b, double bal){
    name = a;
    id = b;
    balance = bal;
}

 Bank::~Bank(){
 std::cout << "Прощай, " << name <<"!\n";
 }
 
void Bank::show(){
    using std::cout;
    using std::endl;
    cout << "Имя: " << name << endl;;
    cout << "Номер счета: " << id << endl;
    cout << "Баланс: " << balance << endl;
}
void Bank::replenishment(double pluz){
    balance += pluz;
}
void Bank::withdrawal(double minuz){
    if(minuz > balance)
        std::cout << "Вы не можете снять больше, чем у вас есть на балансе." << std::endl;
    else
        balance -= minuz;
}
