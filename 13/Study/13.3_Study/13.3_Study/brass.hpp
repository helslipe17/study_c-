//
//  brass.hpp
//  13.3_Study
//
//  Created by Дмитрий Цюрко on 30.05.2023.
//

#ifndef brass_hpp
#define brass_hpp

#include <stdio.h>
class Brass{
private:
    enum {MAX = 35};
    char fullname[MAX];
    long acctNum;
    double balance;
public:
    Brass(const char * s = "Nullbody", long an = -1, double bal = 0.0);
    void Deposit(double amt);
    virtual void Withdraw(double amt);
    double Balance()const;
    virtual void ViewAcct()const;
    virtual ~Brass() {}
};
class BrassPluz : public Brass{
private:
    double maxLoan;
    double rate;
    double owesBank;
public:
    BrassPluz(const char * s = "Nullbody", long an = -1, double bal = 0.0, double ml = 500, double r = 0.10);
    BrassPluz(const Brass & ba, double ml = 500, double r = 0.10);
    virtual void ViewAcct()const;
    virtual void Withdraw(double amt);
    void ResetMax(double m) {maxLoan = m;};
    void ReserRait(double r) {rate = r;};
    void ResetOwes(){owesBank = 0;};
};
#endif /* brass_hpp */
