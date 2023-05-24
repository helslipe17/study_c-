//
//  main.cpp
//  12.4_Study
//
//  Created by Дмитрий Цюрко on 22.05.2023.
//
#include "queue.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
const int MIN_PER_HR = 60;
bool newcustomer(double x);

int main() {
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;
    std::srand(std::time(0));
    
    cout << "Учебный пример: банкомат банка Bank of Heather\n";
    cout << "Введите максимальный размер очереди: ";
    int qs;
    cin >> qs;
    Queue line(qs);
    cout << "Введите количество моделируемых часов: ";
    int hours;
    cin >> hours;
    long cyclelimit = MIN_PER_HR * hours;
    cout << "Введите среднее количество покупателей в час: ";
    double perhour;
    cin >> perhour;
    double min_per_cust;
    min_per_cust = MIN_PER_HR / perhour;
    
    Item temp;
    long turnaways = 0;
    long customers = 0;
    long served = 0;
    long sum_line = 0;
    int wait_time = 0;
    long line_wait = 0;
    
    for(int cycle = 0; cycle < cyclelimit; cycle++){
        if(newcustomer(min_per_cust)){
            if(line.isfull())
                turnaways++;
            else{
                customers++;
                temp.set(cycle);
                line.enqueue(temp);
            }
        }
        if(wait_time <= 0 && !line.isempty()){
            line.dequeue(temp);
            wait_time = temp.ptime();
            line_wait += cycle - temp.when();
            served++;
        }
        if(wait_time > 0)
            wait_time--;
        sum_line += line.queuecount();
    }
    
    if(customers > 0){
        cout << "принято покупателей: " << customers << endl;
        cout << "обслужено покупателей: " << served << endl;
        cout << "отправлено покупателей: " << turnaways << endl;
        cout << "средний размер очереди: ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout.setf(ios_base::showpoint);
        cout << (double) sum_line / cyclelimit << endl;
        cout << "среднее время ожидания: "
        << (double) line_wait / served << " минут" << endl;
    }
    else
        cout << "Покупателей нет!\n";
    cout << "Готово!" << endl;
    return 0;
}
bool newcustomer(double x){
    return (std::rand() * x / RAND_MAX < 1);
}
