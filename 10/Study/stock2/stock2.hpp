//
//  stock2.hpp
//  stock2
//
//  Created by Дмитрий Цюрко on 29.04.2023.
//

#ifndef stock2_hpp
#define stock2_hpp

#include <stdio.h>
#include <string>
class Stock{
private:
    std::string company;
    int shares;
    double share_val;
    double total_val;
    void set_tot() {total_val = shares * share_val;}
public:
    Stock();
    Stock(const char * co, int n = 0, double pr = 0.0);
    ~Stock();
//    void acquire(const char * co, int n, double pr);
    void buy(int num, double price);
    void sell(int num, double price);
    void update(double price);
    void show();
    const Stock & topval(const Stock & s) const;
};

#endif /* stock2_hpp */
