//
//  mytime0.cpp
//  11.1_study
//
//  Created by Дмитрий Цюрко on 08.05.2023.
//

#include "mytime0.hpp"

Time::Time(){
    hours = minutes = 0;
}
Time::Time(int h, int m){
    hours = h;
    minutes = m;
}
void Time::AddMin(int m){
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}
void Time::AddHours(int h){
    hours += h;
}
void Time::Reset(int h, int m){
    hours = h;
    minutes = m;
}
Time Time::operator+(const Time &t) const{
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}
void Time::Show() const{
    std::cout << hours << " часов, " << minutes << " минут";
}

