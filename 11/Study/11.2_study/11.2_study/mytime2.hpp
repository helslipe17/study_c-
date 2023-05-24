//
//  mytime2.hpp
//  11.2_study
//
//  Created by Дмитрий Цюрко on 08.05.2023.
//

#ifndef mytime2_hpp
#define mytime2_hpp

#include <stdio.h>
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
    Time operator-(const Time & t) const;
    Time operator*(double mult) const;
    void Show() const;
};
#endif /* mytime2_hpp */
