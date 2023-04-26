
#include <iostream>
#include "golf.hpp"


int main(void){
    int const SIZE = 5;
    golf dima;
        setgolf(dima, "Dmitriy Tsyurko", 24);
        showgolf(dima);
     
        golf player[SIZE];
        int k = 0;
        for ( ; k < SIZE; ++k)
            if (setgolf(player[k]) == 0)
                break;
     
        for ( int i = 0; i < k; ++i)
            showgolf(player[i]);
    return 0;
}

