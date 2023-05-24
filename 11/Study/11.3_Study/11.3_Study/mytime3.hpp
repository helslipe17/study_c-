//
//  mytime3.hpp
//  11.3_Study
//
//  Created by Дмитрий Цюрко on 09.05.2023.
//

#ifndef mytime3_hpp
#define mytime3_hpp

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
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    Time operator+(const Time & t) const;
    Time operator-(const Time & t) const;
    Time operator*(double mult) const;
    friend Time operator*(double m, const Time & t){return t * m;};
    friend std::ostream & operator<<(std::ostream & os, const Time & t);
};
#endif /* mytime3_hpp */
