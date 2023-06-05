//
//  acctabc.cpp
//  13.4_Study
//
//  Created by Дмитрий Цюрко on 31.05.2023.
//

#include "acctabc.hpp"
#include <cstring>

using std::cout;
using std::ios_base;
using std::endl;

AcctABC::AcctABC(const char * s, long an, double bal){
    std::strncpy(fullname, s, MAX - 1);
    fullname[MAX - 1] = '\0';
    accNum = an;
    balance = bal;
}
void AcctABC::Deposit(double amt){
    if(amt < 0){
        cout << "Отрицательный вклад не допускается; ";
        cout << "попытка вклада отменена.\n";
    }
    else
        balance += amt;
}
void AcctABC::WithDraw(double amt){
    balance -=amt;
}
ios_base::fmtflags AcctABC::SetFormat()const{
    ios_base:: fmtflags initialState =
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.setf(ios_base::showpoint);
    cout.precision(2);
    return initialState;
}

void Brass::WithDraw(double amt){
    if(amt < 0){
        cout << "Снимаемая сумма должна быть положительной; ";
        cout << "попытка снятия отменена.\n";
    }
    else if (amt <= Balance())
        AcctABC::WithDraw(amt);
    else{
        cout << "Снимаемая сумма $" << amt;
        cout << " превышает ваш баланс.\n";
        cout << "Попытка снятия отменена.\n";
    }
}
void Brass::ViewAcct()const{
    ios_base::fmtflags initialState = SetFormat();
    cout << "Клиент Brass: " << Fullname() << endl;
    cout << "Номер счета: " << AccNum() << endl;
    cout << "Баланс: $" << Balance() << endl;
    cout.setf(initialState);
}
BrassPlus::BrassPlus(const char * s, long an, double bal, double ml, double r)
: AcctABC(s, an, bal){
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}
BrassPlus::BrassPlus(const Brass &ba, double ml, double r) : AcctABC(ba){
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}
void BrassPlus::ViewAcct()const{
    ios_base::fmtflags initialState = SetFormat();
    cout << "Клиент BrassPlus: " << Fullname() << endl;
    cout << "Номер счета: " << AccNum() << endl;
    cout << "Баланс: $" << Balance() << endl;
    cout << "Максимальный заем: $" <<maxLoan << endl;
    cout << "Долг банку: $" << owesBank << endl;
    cout << "Процент на заем: " << 100 * rate << endl;
    cout.setf(initialState);
}
void BrassPlus::WithDraw(double amt){
    ios_base::fmtflags initialState = SetFormat();
    double bal = Balance();
    if (amt <= bal)
        AcctABC::WithDraw(amt);
    else if (amt <= bal + maxLoan - owesBank){
        double advance = amt - bal;
        owesBank += advance * (1.0 + rate);
        cout << "Банковский аванс: $" << advance << endl;
        cout << "Налог: $" << advance * rate << endl;
        Deposit(advance);
        AcctABC::WithDraw(amt);
    }
    else
        cout << "Предел кредита превышен. Транзакция отменена.\n";
    cout.setf(initialState);
}
