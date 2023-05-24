//
//  main.cpp
//  11.5_Study
//
//  Created by Дмитрий Цюрко on 11.05.2023.
//

#include <iostream>
#include "stonewt.hpp"
using std::cout;

void Display(const Stonewt & st, int n);

int main(int argc, const char * argv[]) {
    Stonewt pavarotti = 260;
    Stonewt wolfe(285.7);
    Stonewt paft(21, 8);
    cout << "Тенор взвешен ";
    pavarotti.show_stn();
    cout << "Детектив взвешен ";
    wolfe.show_stn();
    cout << "Президент взвешен ";
    paft.show_stn();
    pavarotti = 265.8;
    paft = 325;
    cout << "После обеда тенор весит ";
    pavarotti.show_stn();
    cout << "После обеда Президент весит ";
    paft.show_lbs();
    Display(paft, 2);
    cout << "Борец весит даже больше\n";
    Display(422, 2);
    cout << "Не осталось больше стоунов\n";
    return 0;
}
void Display(const Stonewt & st, int n){
    for(int i = 0; i < n; i++){
        cout << "Ого! ";
        st.show_stn();
    }
}
