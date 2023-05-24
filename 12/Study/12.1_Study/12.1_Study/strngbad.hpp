//
//  strngbad.hpp
//  12.1_Study
//
//  Created by Дмитрий Цюрко on 15.05.2023.
//

#ifndef strngbad_hpp
#define strngbad_hpp

#include <stdio.h>
#include <iostream>

class StringBad{
private:
    char * str;
    int len;
    static int num_strings;
public:
    StringBad(const char * s);
    StringBad();
    ~StringBad();
    friend std::ostream & operator <<(std::ostream & os, const StringBad & st);
};
#endif /* strngbad_hpp */
