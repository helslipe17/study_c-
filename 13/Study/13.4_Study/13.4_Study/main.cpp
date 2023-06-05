//
//  main.cpp
//  13.4_Study
//
//  Created by Дмитрий Цюрко on 31.05.2023.
//

#include <iostream>
#include "acctabc.hpp"
const int CLIENTS = 4;
const int LEN = 40;


int main(int argc, const char * argv[]) {
    using std::cin;
    using std::cout;
    using std::endl;
    AcctABC * p_clients[CLIENTS];
    int i;
    for (i = 0; i < CLIENTS; i++){
        char temp[LEN];
        long tempnum;
        double tempbal;
        char kind;
        cout << "Введите имя клиента: ";
        cin.getline(temp, LEN);
        cout << "Введите номер счета клиента: ";
        cin >> tempnum;
        cout << "Введите начальный баланс: $";
        cin >> tempbal;
        cout << "Введите 1 для счета Brass Account или ";
        cout << "2 для счета Brass Plus: ";
        while (cin >> kind && (kind != '1' && kind != '2'))
            cout << "Введите 1 или 2: ";
        if(kind == '1')
            p_clients[i] = new Brass(temp, tempnum, tempbal);
        else{
            double tmax, trate;
            cout << "Введите предел превышения кредита: $";
            cin >> tmax;
            cout << "Введите ставку процента: ";
            cin >> trate;
            p_clients[i] = new BrassPlus(temp, tempnum, tempbal, tmax, trate);
        }
        while (cin.get() != '\n')
            continue;
    }
    cout << endl;
    for(i = 0; i < CLIENTS; i ++ ){
        p_clients[i]->ViewAcct();
        cout << endl;
    }
    for(i = 0; i < CLIENTS; i ++ ){
        delete p_clients[i];
    }
    cout << "Готово.\n";
    
    return 0;
}
