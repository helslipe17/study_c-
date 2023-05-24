//
//  main.cpp
//  11.2_study
//
//  Created by Дмитрий Цюрко on 08.05.2023.
//

#include <iostream>
#include "mytime2.hpp"

int main(int argc, const char * argv[]) {
    using std::cout;
    using std::endl;
    Time planning;
    Time weeding(4, 35);
    Time waxing (2, 47);
    Time total;
    Time diff;
    Time adjusted;
    cout << "время подготовки = ";
    weeding.Show();
    cout << endl;
    cout << "полезное время = ";
    waxing.Show();
    cout << endl;
    total = weeding + waxing;
    cout << "Общее рабочее время = ";
    total.Show();
    cout << endl;
    diff = weeding - waxing;
    cout << "время подготовки - полезное время = ";
    diff.Show();
    cout << endl;
    adjusted = total * 1.5;
    cout << "исправленное рабочее время = ";
    adjusted.Show();
    cout << endl;
    
    return 0;
}
