//
//  main.cpp
//  stock
//
//  Created by Дмитрий Цюрко on 29.04.2023.
//

#include <iostream>
#include "stack.hpp"

int main(){
    using namespace std;
    Stack st;
    char ch;
    unsigned long po;
    cout << "Пожалуйста, введите А для добавления заказа,\n"
         << "Р - для обработки заказа, Q - для выхода.\n";
    while (cin >> ch && toupper(ch) != 'Q') {
        while (cin.get() != '\n')
            continue;
        if(!isalpha(ch)){
            cout << "\a";
            continue;
        }
        switch (ch) {
            case 'A':
            case 'a':
                cout <<"Введите номер заказа для добавления: ";
                cin >> po;
                if(st.isfull())
                    cout << "Стек уже полон\n";
                else
                    st.push(po);
                break;
            case 'P':
            case 'p':
                if(st.isempty())
                    cout << "Стек уже пуст\n";
                else{
                    st.pop(po);
                    cout << "заказ # " << po << " вытолкнут\n";
                }
                break;
        }
        cout << "Пожалуйста, введите А для добавления заказа, \n";
        cout << "Р - для обработки заказа, Q - для выхода.\n";
    }
    cout << "Готово\n";
    return 0;
    
}

