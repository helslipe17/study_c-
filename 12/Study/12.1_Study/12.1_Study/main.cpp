//
//  main.cpp
//  12.1_Study
//
//  Created by Дмитрий Цюрко on 15.05.2023.
//

#include <iostream>
#include "strngbad.hpp"

using std::cout;

void callme1(StringBad &);
void callme2(StringBad);

int main(int argc, const char * argv[]) {
    using std::endl;
    StringBad headline1("Сельдерей подкрался в полночь");
    StringBad headline2("Салат-латук вышел на охоту");
    StringBad sports("Шпинат поселился в трехлитровой банке с долларами");
    cout << "headline1: " << headline1 << endl;
    cout << "headline2: " << headline2 << endl;
    cout << "sports: " << sports << endl;
    callme1(headline1);
    cout << "headline1: " << headline1 << endl;
    callme2(headline2);
    cout << "headline2: " << headline2 << endl;
    cout << "Инициализация одного обьекта другим" << endl;
    StringBad sailor = sports;
    cout << "sailor: " << sailor << endl;
    cout << "Присваивание одного обьекта другим" << endl;
    StringBad knot;
    knot = headline1;
    cout << "knot: " << knot << endl;
    cout << "Конец функции main()\n";
    return 0;
}
void callme1(StringBad & rsb){
    cout << "Строка, переданная по ссылке:\n";
    cout << "\"" << rsb << "\"";
}
void callme2(StringBad sb){
    cout << "Строка, переданная по значению:\n";
    cout << "\"" << sb << "\"";
}
