//
//  coording.cpp
//  coording
//
//  Created by Дмитрий Цюрко on 05.04.2023.
//

#include "coording.hpp"
#include <iostream>
using namespace std;

int main(){
    rect rplace;
    polar pplace;
    cout << "Введите значение x и y:";
    while (cin>>rplace.x >> rplace.y) {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Следующие два числа (для выхода введите q): ";
    }
    cout << "Всего наилучшего!\n";
}
