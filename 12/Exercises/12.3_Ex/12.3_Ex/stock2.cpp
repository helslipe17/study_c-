//
//  stock2.cpp
//  12.3_Ex
//
//  Created by Дмитрий Цюрко on 25.05.2023.
//

#include "stock2.hpp"
#include <iostream>

Stock::Stock(){
    std::cout << "Вызван конструктор по умолчанию\n";
    company = new char[8];
    company = "Без имени";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const char * co, long n, double pr){
    std::cout << "Вызван конструктор для " << co << std::endl;
    company = new char[strlen(co) + 1];
    strcpy(company, co);
    
    if (n < 0){
        std::cout << "Количество пакетов не может быть отрицательным; для "
        << company << " установлено в О.\n";
        shares = 0;
    }
    else{
        shares = n;
    }
    share_val = pr;
    set_tot();
}
Stock::~Stock(){
    delete[] company;
}
void Stock::buy(long num, double price){
    if(num < 0){
        std::cerr << "Количество приобретаемых пакетов не может быть отрицательным."
        << "Транзакция прервана.\n";
    }
    else{
        shares +=num;
        share_val = price;
        set_tot();
    }
}
void Stock::sell(long num, double price){
    using std::cerr;
    if(num < 0){
        cerr << "Количество продаваемых пакетов не может быть отрицательным. "
        << "Транзакция прервана.\n";
    }
    else if (num > shares){
        cerr << "Вы не можете продать больше того, чем владеете! "
        << "Транзакция прервана.\n";
    }
    else{
        shares -=num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price){
    share_val = price;
    set_tot();
}

//void Stock::show(){
//    using std::cout;
//    using std::endl;
//    cout << "Компания: " << company
//         << " Пакетов: " << shares << endl
//         << "Цена пакета: $" << share_val
//         << " Общая стоимость: $" << total_val << endl;
//}

const Stock & Stock::topval(const Stock & s) const{
    if(s.total_val > total_val)
        return s;
    else
        return *this;
}

std::ostream & operator << (std::ostream & os, const Stock & st)
{
    os << "Company: " << st.company;
    os << " Shares: " << st.shares << '\n';
    os << " Share Price: $" << st.share_val;
    os << " Total Worth: $" << st.total_val << '\n';
    return os;
}
