
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "vect.hpp"

int main(int argc, const char * argv[]) {
    using namespace std;
    ofstream fout;
    const char * fn = "vect.txt";
        fout.open(fn);
        if(!fout.is_open()){
            cout <<"Невозможно открыть " << fn << " Пока.\n";
            exit(EXIT_FAILURE);
        }
    using Vector::Vector;
    srand(int(time(0)));
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
        fout << "После " << steps << " шагов субъект имеет следующее местоположение:\n";
        cout << "После " << steps << " шагов субъект имеет следующее местоположение:\n";
        fout << result << endl;
        cout << result << endl;
        result.polar_mode();
        fout << "Средняя дистанция на один шаг = ";
        cout << "Средняя дистанция на один шаг = ";
        fout << result.magval()/steps << endl;
        cout << result.magval()/steps << endl;
        steps = 0;
        result.set(0.0, 0.0);
        cout << "Введите дистанцию (q для выхода) :";
    }
    cout << "Не злоупотребляйте!\n" << endl;
    return 0;
}
