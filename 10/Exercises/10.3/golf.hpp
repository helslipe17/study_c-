
#ifndef golf_hpp
#define golf_hpp

#include <stdio.h>

#endif /* namesp_hpp */
class Golf{
private:
    static const int LEN = 40;
    char fullname[LEN];
    int handicap;
public:
    Golf(const char * name = "", int hc = 0);
    ~Golf(){};
    int setgolf();
    void showgolf();
};


