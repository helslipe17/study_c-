//
//  main.cpp
//  13.1_Study
//
//  Created by Дмитрий Цюрко on 25.05.2023.
//

#include <iostream>
#include "tabtenn0.hpp"

int main(int argc, const char * argv[]) {
    using std::cout;
    TableTennisPlayer player1("Чaк", "Близзард", true);
    TableTennisPlayer player2("Tapa", "Бумди", false);
    player1.Name();
    if(player1.HasTable())
        cout << ": имеет стол.\n";
    else
        cout << ": не имеет стола.\n";
    player2.Name();
    if(player2.HasTable())
        cout << ": имеет стол.\n";
    else
        cout << ": не имеет стола.\n";
    return 0;
}
