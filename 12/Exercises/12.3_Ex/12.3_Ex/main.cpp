//
//  main.cpp
//  12.3_Ex
//
//  Created by Дмитрий Цюрко on 25.05.2023.
//

#include <iostream>
#include "stock2.hpp"

const int STKS = 4;

int main() {
    using std:: cout;
    using std:: ios_base;
    cout.setf(ios_base::fixed);
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    Stock stock[STKS]{
        Stock("NanoSmart", 12, 20.0),
        Stock("Boffo Objects", 200, 2.0),
        Stock("Monolithic Obelisks", 130, 3.25),
        Stock("Fleep Enterprises", 60, 6.5)
    };
    cout << "Пакеты акций:\n";
    int st;
    for(st = 0; st < STKS; st++){
        cout << stock[st];
    }
    const Stock* top = &stock[0];
    for (int st = 1; st < STKS; st++)
    {
         top = &top->topval(stock[st]);
    }
    cout << "\nСамый большой пакет:\n";
    cout << *top;
    return 0;
}
