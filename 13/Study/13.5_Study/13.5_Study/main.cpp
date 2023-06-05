//
//  main.cpp
//  13.5_Study
//
//  Created by Дмитрий Цюрко on 01.06.2023.
//

#include <iostream>
#include "dma.hpp"

int main(int argc, const char * argv[]) {
    using std::cout;
    using std::endl;
    baseDMA shirt("Portabelly", 8);
    lacksDMA balloon("red", "Blimpo", 4);
    hasDMA map("Mercator", "Buffalo Keys", 5);
    cout << shirt << endl;
    cout << balloon << endl;
    cout << map << endl;
    lacksDMA balloon2(balloon);
    hasDMA map2;
    map2 = map;
    cout << balloon2 << endl;
    cout << map2 << endl;
    return 0;
}
