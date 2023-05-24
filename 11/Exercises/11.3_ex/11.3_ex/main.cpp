
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vect.hpp"

int main(int argc, const char * argv[]) {
    using namespace std;
    using Vector::Vector;
    srand(int(time(0)));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    unsigned long max_value = 0;
    unsigned long min_value = 0;
    unsigned long avarage_value = 0;
    unsigned long total = 0;
    int count;
    cout << "Введите количество попыток: ";
    cin >> count;
    for(int i = 0; i < count; i++){
        cout << "Введите дистанцию (q для выхода): ";
        cin>>target;
        cout << "Введите длину шага: ";
        if(!(cin>>dstep))
            break;
        while (result.magval() < target) {
            direction = rand() % 360;
            step.set(dstep, direction, 'p');
            result = result + step;
            steps++;
        }
        if(i == 0){
            min_value = steps;
        }
        else{
            if(min_value >steps)
                min_value = steps;
        }
        if(i == 0){
            max_value = steps;
        }
        else{
            if(max_value < steps)
                max_value = steps;
        }
        total +=steps;
//        cout << "После " << steps << " шагов субъект имеет следующее местоположение:\n";
        cout << result << endl;
        result.polar_mode();
        cout << "Средняя дистанция на один шаг = ";
        cout << result.magval()/steps << endl;
        steps = 0;
        result.set(0.0, 0.0);
    }
    avarage_value = total / count;
    cout << "После " << count << " попыток, максимальное количество шагов составило: ";
    cout << max_value <<", минимальное: " << min_value << " и среднее количество шагов составило:";
    cout << avarage_value << endl;
//    cout << "Не злоупотребляйте!\n" << endl;
    return 0;
}
