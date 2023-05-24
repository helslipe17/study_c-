//
//  main.cpp
//  12.2_Study
//
//  Created by Дмитрий Цюрко on 18.05.2023.
//
#include "string1.hpp"
#include <iostream>
const int ArSize = 10;
const int MaxLen = 81;

int main(int argc, const char * argv[]) {
    using std::cout;
    using std::cin;
    using std::endl;
    String name;
    cout << "Как вас зовут?\n >>";
    cin >> name;
    cout << name << ", пожалуйста, введите до " << ArSize;
    cout << " коротких пословиц <или пустую строку для завершения>:\n";
    String sayings[MaxLen];
    char temp[MaxLen];
    int i;
    for(i = 0; i < ArSize; i++){
        cout << i + 1 << ": ";
        cin.get(temp, MaxLen);
        while (cin && cin.get()!= '\n')
            continue;
         if(!cin || temp[0] == '\0')
             break;
        else
            sayings[i] = temp;
    }
    int total = i;
    if(total > 0){
        cout << "Вы ввели следующие пословицы:\n";
        for(i = 0; i < total; i++)
            cout << sayings[i] << endl;
        
        String * shortest = &sayings[0];
        String * first = &sayings[0];
        for(i = 0; i < total; i ++){
            if(sayings[i].length() < shortest->length())
                shortest = &sayings[i];
            if(sayings[i] < *first)
                first =&sayings[i];
        }
        cout << "Кратчайшая пословица:\n" << *shortest << endl;
        cout << "Первая пословица по алфавиту:\n" << *first << endl;
        
        srand(int(time(0)));
        int choice = rand() % total;
        String * favorite = new String(sayings[choice]);
        cout << "Моя любимая пословица:\n" << *favorite << endl;
        delete favorite;
    }
    else
        cout << "Что, нечего сказать, да?\n";
    cout << "Всего наилучшего.\n";
    return 0;
}
