//
//  Bank.hpp
//  test-project
//
//  Created by Дмитрий Цюрко on 02.05.2023.
//

#ifndef Bank_hpp
#define Bank_hpp

#include <stdio.h>
#include <string>
class Bank{
private:
    std::string name;
    std::string id;
    double balance;
public:
    Bank();
    Bank(const char * a, const char * b, double bal);
    ~Bank();
    void show();
    void replenishment(double pluz);
    void withdrawal(double minuz);
};


#endif /* Bank_hpp */
