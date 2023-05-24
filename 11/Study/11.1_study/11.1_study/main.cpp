//
//  main.cpp
//  11.1_study
//
//  Created by Дмитрий Цюрко on 08.05.2023.
//

#include <iostream>
#include "mytime0.hpp"

int main(int argc, const char * argv[]) {
    using std::cout;
    using std::endl;
    Time planning;
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;
    cout << "Плановое время: ";
    planning.Show();
    cout << endl;
    cout << "Время коддирования: ";
    coding.Show();
    cout << endl;
    cout << "Фиксированное время: ";
    fixing.Show();
    cout << endl;
    total = coding + fixing;
    cout << "coding.Sum(fixing) = ";
    total.Show();
    cout << endl;
    return 0;
}
