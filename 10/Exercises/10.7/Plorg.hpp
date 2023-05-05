//
//  Plorg.hpp
//  10.7
//
//  Created by Дмитрий Цюрко on 05.05.2023.
//

#ifndef Plorg_hpp
#define Plorg_hpp

#include <stdio.h>
class Plorg{
private:
    char name[19];
    int CI;
public:
    Plorg(const char *n = "Plorga", int i = 50);
    void newci(int c);
    void showplorg();
};
#endif /* Plorg_hpp */
