
#include <iostream>
#include "golf.hpp"


int main(void){
    int const SIZE = 5;
        Golf dima;
        dima = Golf("Dmitriy Tsyurko", 24);
        dima.showgolf();
        Golf player[SIZE];
        int k = 0;
    for ( ; k < SIZE; ++k){
        if (player[k].setgolf() == 0)
            break;
        
        for ( int i = 0; i < k; ++i)
            player[i].showgolf();
    }
    return 0;
}
