//
//  mytime0.hpp
//  11.1_study
//
//  Created by Дмитрий Цюрко on 08.05.2023.
//

#ifndef mytime0_hpp
#define mytime0_hpp

#include <stdio.h>
#include <iostream>
class Time{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m = 0);
    void AddMin(int m);
    void AddHours(int h);
    void Reset(int h = 0, int m = 0);
    Time operator+(const Time & t) const;
    void Show() const;
};

#endif /* mytime0_hpp */
