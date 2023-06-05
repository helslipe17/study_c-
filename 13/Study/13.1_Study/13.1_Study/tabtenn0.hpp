//
//  tabtenn0.hpp
//  13.1_Study
//
//  Created by Дмитрий Цюрко on 25.05.2023.
//

#ifndef tabtenn0_hpp
#define tabtenn0_hpp

#include <stdio.h>
class TableTennisPlayer{
private:
    enum{LIM = 20};
    char firstname[LIM];
    char lastname[LIM];
    bool hasTable;
public:
    TableTennisPlayer(const char * fn = "none", const char * ln = "none", bool ht = false);
    void Name() const;
    bool HasTable()const { return hasTable;}
    void resetTable(bool v) { hasTable = v;};
};
#endif /* tabtenn0_hpp */
