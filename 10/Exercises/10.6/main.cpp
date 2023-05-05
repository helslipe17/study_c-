//
//  main.cpp
//  10.6
//
//  Created by Дмитрий Цюрко on 04.05.2023.
//

#include <iostream>
#include "move.hpp"

int main(int argc, const char * argv[]) {
    Move a;
    a.showmore();
    Move b(5.0, 3.4);
    b.showmore();
    a.add(b);
    a.showmore();
    return 0;
}
