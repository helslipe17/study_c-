//
//  tabtenn1.hpp
//  13.2_Study
//
//  Created by Дмитрий Цюрко on 29.05.2023.
//

#ifndef tabtenn1_hpp
#define tabtenn1_hpp

#include <stdio.h>
class TableTennisPlayer{
private:
    enum{LIM = 20};
    char firstName[LIM];
    char lastNmae[LIM];
    bool hasTable;
public:
    TableTennisPlayer(const char * fn = "none", const char * ln = "none", bool ht = false);
    void Name()const;
    bool Hastable() const{return hasTable;};
    void ResetTable(bool v){ hasTable = v;};
};
class RatedPlayer : public TableTennisPlayer{
private:
    unsigned int rating;
public:
    RatedPlayer(unsigned int r = 0, const char * fn = "none", const char * ln = "none", bool ht = false);
    RatedPlayer(unsigned int r, const TableTennisPlayer & tp);
    unsigned int Rating(){return rating; };
    void ResetRating(unsigned int r) { rating = r; };
};
#endif /* tabtenn1_hpp */
