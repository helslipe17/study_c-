//
//  acctabc.hpp
//  13.4_Study
//
//  Created by Дмитрий Цюрко on 31.05.2023.
//

#ifndef acctabc_hpp
#define acctabc_hpp

#include <stdio.h>
#include <iostream>
//---------------------------------------
//---------------------------------------
class AcctABC{
private:
    enum {MAX = 35};
    char fullname[MAX];
    long accNum;
    double balance;
protected:
    const char * Fullname()const{return fullname;};
    long AccNum()const{return accNum;};
    std::ios_base::fmtflags SetFormat() const;
public:
    AcctABC(const char * s = "Nullbody", long an = -1, double bal = 0.0);
    void Deposit(double amt);
    virtual void WithDraw(double amt) = 0;
    double Balance()const{return balance;};
    virtual void ViewAcct() const = 0;
    virtual ~AcctABC(){}
};
//---------------------------------------
//---------------------------------------
class Brass : public AcctABC{
public:
    Brass(const char * s = "Nullbody", long an = -1, double bal = 0.0) : AcctABC(s, an, bal){}
    virtual void WithDraw(double amt);
    virtual void ViewAcct() const;
    virtual ~Brass(){}
};
//---------------------------------------
//---------------------------------------
class BrassPlus : public AcctABC{
private:
    double maxLoan;
    double rate;
    double owesBank;
public:
    BrassPlus(const char * s = "Nullbody", long an = -1, double bal = 0.0, double ml = 500, double r = 0.10);
    BrassPlus(const Brass & ba, double ml = 500, double r = 0.10);
    virtual void WithDraw(double amt);
    virtual void ViewAcct() const;
    void ResetMax(double m){maxLoan = m;};
    void ResetRate(double r){rate = r;};
    void ResetOwes(){owesBank = 0;};
};
#endif /* acctabc_hpp */
