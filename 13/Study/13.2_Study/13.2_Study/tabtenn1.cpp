//
//  tabtenn1.cpp
//  13.2_Study
//
//  Created by Дмитрий Цюрко on 29.05.2023.
//

#include "tabtenn1.hpp"
#include <iostream>

TableTennisPlayer::TableTennisPlayer(const char * fn, const char * ln, bool ht){
    strncpy(firstName, fn, LIM - 1);
    firstName[LIM - 1] = '\0';
    strncpy(lastNmae, ln, LIM - 1);
    firstName[LIM - 1] = '\0';
    hasTable = ht;
}
void TableTennisPlayer::Name()const{
    std::cout << lastNmae << ", " << firstName;
}
RatedPlayer::RatedPlayer(unsigned int r, const char * fn, const char * ln, bool ht) : TableTennisPlayer(fn, ln, ht){
    rating = r;
}
RatedPlayer::RatedPlayer(unsigned int r,const TableTennisPlayer & tp) : TableTennisPlayer(tp), rating(r){}
