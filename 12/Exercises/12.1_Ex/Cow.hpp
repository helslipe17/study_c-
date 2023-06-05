//
//  Cow.hpp
//  12.1_Ex
//
//  Created by Дмитрий Цюрко on 24.05.2023.
//

#ifndef Cow_hpp
#define Cow_hpp

#include <stdio.h>
class Cow{
private:
    char name[20];
    char * hobby;
    double weight;
public:
    Cow();
    Cow(const char * nm, const char * ho, double wt);
    Cow(const Cow &c);
    ~Cow();
    Cow & operator = (const Cow & c);
    void ShowCow()const;
};

#endif /* Cow_hpp */
