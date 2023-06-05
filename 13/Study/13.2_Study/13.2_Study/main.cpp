//
//  main.cpp
//  13.2_Study
//
//  Created by Дмитрий Цюрко on 29.05.2023.
//

#include <iostream>
#include "tabtenn1.hpp"

int main(int argc, const char * argv[]) {
    using std::cout;
    using std::endl;
    TableTennisPlayer player1("Тара", "Бумди", false);
    RatedPlayer rplayer1(1140, "Мэллори", "Дюк", true);
    rplayer1.Name();
    if(rplayer1.Hastable()){
        cout << ": имеет стол.\n";
    } else{
        cout << ": не имеет стола.\n";
    }
    player1.Name();
    if(player1.Hastable()){
        cout << ": имеет стол.\n";
    } else{
        cout << ": не имеет стола.\n";
    }
    cout << "Имя: ";
    rplayer1.Name();
    cout << "; Рейтинг: " << rplayer1.Rating() << endl;
    RatedPlayer rplayer2(1212, player1);
    cout << "Имя: ";
    rplayer2.Name();
    cout << "; Рейтинг: " << rplayer2.Rating() << endl;
    return 0;
}
