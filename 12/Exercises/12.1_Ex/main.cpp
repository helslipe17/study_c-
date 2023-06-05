//
//  main.cpp
//  12.1_Ex
//
//  Created by Дмитрий Цюрко on 24.05.2023.
//

#include <iostream>
#include "Cow.hpp"

int main(int argc, const char * argv[]) {
            Cow Cow1;
            Cow Cow2("Cow2", "Hookah", 33);
            Cow Cow3 = Cow2;
            Cow Cow4;
            Cow4 = Cow2;
            
            std::cout << "Cow №1:\n";
            Cow1.ShowCow();
            
            std::cout << "Cow №2:\n";
            Cow2.ShowCow();
            
            std::cout << "Cow №3:\n";
            Cow3.ShowCow();
            
            std::cout << "Cow №4:\n";
            Cow4.ShowCow();
            
            std::cout << "Готово!\n";
    return 0;
}
