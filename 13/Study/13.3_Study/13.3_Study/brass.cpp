//
//  brass.cpp
//  13.3_Study
//
//  Created by Дмитрий Цюрко on 30.05.2023.
//

#include "brass.hpp"
#include <iostream>
#include <cstring>

using std::cout;
using std::ios_base;
using std::endl;

Brass::Brass(const char * s, long an, double bal){
    std::strncpy(fullname, s, MAX - 1);
    fullname[MAX - 1] = '\0';
    acctNum = an;
    balance = bal;
}

void Brass::Deposit(double amt){
    if(amt < 0){
        cout << "Отрицательный вклад не допускается; ";
        cout << "попытка вклада отменена.\n";
    } else
        balance += amt;
}
void Brass::Withdraw(double amt){
    if(amt < 0){
        cout << "Снимаемая сумма должна быть положительной; ";
        cout << "попытка снятия отменена.\n";
    }
    else if (amt <= balance)
        balance -= amt;
    else{
        cout << "Снимаемая сумма $" << amt;
        cout << " превышает ваш баланс.\n";
        cout << "Попытка снятия отменена.\n";
    }
}
double Brass::Balance()const{
    return balance;
}
void Brass::ViewAcct() const{
    ios_base::fmtflags initialState = cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.setf(ios_base::showpoint);
    cout.precision(2);
    cout << "Клиент: " << fullname << endl;
    cout << "Номер счета :" << acctNum << endl;
    cout << "Баланс : $" << balance << endl;
    cout.setf(initialState);
}

BrassPluz::BrassPluz(const char * s, long an, double bal, double ml, double r) : Brass(s, an, bal){
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}
BrassPluz::BrassPluz(const Brass &ba, double ml, double r) : Brass(ba){
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}
void BrassPluz::ViewAcct()const{
    ios_base::fmtflags initialState = cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.setf(ios_base::showpoint);
    cout.precision(2);
    Brass::ViewAcct();
    cout << "Максимальный заем: $" << maxLoan << endl;
    cout << "Долг банку: $" << owesBank << endl;
    cout << "Процент на заем: " << 100 * rate << "%" << endl;
    cout.setf(initialState);
}
void BrassPluz::Withdraw(double amt){
    ios_base::fmtflags initialState = cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.setf(ios_base::showpoint);
    cout.precision(2);
    double bal = Balance();
    if(amt <= bal)
        Brass::Withdraw(amt);
    else if(amt < bal + maxLoan - owesBank){
        double advance = amt - bal;
        owesBank += advance * (1.0 + rate);
        cout << "Банковский аванс: $" << advance << endl;
        cout << "Налог: $" << advance * rate << endl;
        Deposit(advance);
        Brass::Withdraw(amt);
    }
    else
        cout << "Предел кредита превышен. Транзакция отменена.\n";
    cout.setf(initialState);
}
