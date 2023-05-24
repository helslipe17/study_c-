//
//  main.cpp
//  11.7_ex
//
//  Created by Дмитрий Цюрко on 14.05.2023.
//

#include <iostream>
#include "complex.hpp"
using namespace std;

int main() {
    Complex a(3.0, 4.0);
    Complex c;
    cout << "Введите комnлексное число (q для выхода}: \n";
    while (cin >> c) {
        cout << "c равно " << c << endl;
        cout << "комплексное слияние равно: " << ~c << endl;
        cout << "а равно " << a << endl;
        cout << "a + c равно " << a + c << endl;
        cout << "a - c равно " << a - c << endl;
        cout << "a * c равно " << a * c << endl;
        cout << "2 * c равно " << 2 * c << endl;
        cout << "Введите комnлексное число (q для выхода}: \n";
    }
    cout << "Готово!\n";
    return 0;
}
