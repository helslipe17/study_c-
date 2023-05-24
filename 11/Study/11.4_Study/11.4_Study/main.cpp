//
//  main.cpp
//  11.4_Study
//
//  Created by Дмитрий Цюрко on 10.05.2023.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vect.hpp"

int main(int argc, const char * argv[]) {
    using namespace std;
    using Vector::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    cout << "Введите дистанцию (q для выхода): ";
    while (cin>>target) {
        cout << "Введите длину шага: ";
        if(!(cin>>dstep))
            break;
        while (result.magval() < target) {
            direction = rand() % 360;
            step.set(dstep, direction, 'p');
            result = result + step;
            steps++;
        }
        cout << "После " << steps << " шагов субъект имеет следующее местоположение:\n";
        cout << result << endl;
        result.polar_mode();
        cout << "Средняя дистанция на один шаг = ";
        cout << result.magval()/steps << endl;
        steps = 0;
        result.set(0.0, 0.0);
        cout << "Введите дистанцию (q для выхода) :";
    }
    cout << "Не злоупотребляйте!\n" << endl;
    return 0;
}
