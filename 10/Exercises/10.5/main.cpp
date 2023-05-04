
#include <iostream>
#include "stack.hpp"


int main(){
    using namespace std;
    Stack st;
    char ch;
//    Item po;
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
//                Item *po = new Item;
                Item po;
                cout << "Введи свое полное имя: ";
                cin.sync();
//                cin.getline(po->fullname, 35);
                cin.getline(po.fullname, 35);
                cout <<"Введите номер заказа для добавления: ";
//                cin >> po->payment;
                cin >> po.payment;
                if(st.isfull())
                    cout << "Стек уже полон\n";
                else
//                    st.push(po);
                    st.push(po);
                break;
            case 'P':
            case 'p':
                if(st.isempty())
                    cout << "Стек уже пуст\n";
                else{
                    st.pop(po);
                    cout << "заказ # " << po.payment << " вытолкнут\n";
                }
//                delete po;
                break;
        }
        cout << "Пожалуйста, введите А для добавления заказа, \n";
        cout << "Р - для обработки заказа, Q - для выхода.\n";
    }
    cout << "Готово\n";
    return 0;
    
}
