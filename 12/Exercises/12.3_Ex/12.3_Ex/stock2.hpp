//
//  stock2.hpp
//  12.3_Ex
//
//  Created by Дмитрий Цюрко on 25.05.2023.
//

#ifndef stock2_hpp
#define stock2_hpp

#include <stdio.h>
#include <string>
class Stock{
private:
    char * company;
    int shares;
    double share_val;
    double total_val;
    void set_tot() {total_val = shares * share_val;}
public:
    Stock();
    Stock(const char* ch, long n = 0, double pr = 0.0);
    ~Stock();
//    void acquire(const char * co, int n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
//    void show();
    const Stock & topval(const Stock & s) const;
    friend std::ostream & operator << (std::ostream & os, const Stock & st);
};
#endif /* stock2_hpp */
