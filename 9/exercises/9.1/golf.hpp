
#ifndef golf_hpp
#define golf_hpp

#include <stdio.h>

#endif /* namesp_hpp */
const int LEN = 40;
struct golf{
    char fullname[LEN];
    int handicap;
};
void setgolf(golf &g, const char * name, int hc);
int setgolf(golf & g);
void handicap(golf & g, int hc);
void showgolf(const golf &g);
