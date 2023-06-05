//
//  tabtenn0.cpp
//  13.1_Study
//
//  Created by Дмитрий Цюрко on 25.05.2023.
//

#include "tabtenn0.hpp"
#include <iostream>
TableTennisPlayer::TableTennisPlayer(const char * fn, const char * ln, bool ht){
    std::strncpy(firstname, fn, LIM - 1);
    firstname[LIM - 1] = '\0';
    std::strncpy(lastname, ln, LIM - 1);
    lastname[LIM - 1] = '\0';
    hasTable = ht;
}
void TableTennisPlayer::Name()const{
    std::cout << lastname << ", " << firstname;
}
