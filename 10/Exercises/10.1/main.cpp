#include <iostream>
#include <cstring>
#include "Bank.hpp"


int main(){
    Bank Alise;
    Alise = Bank("Alisa Rubkina", "123POR21", 100.0);
    Alise.show();
    Alise.replenishment(200);
    Alise.show();
    Alise.withdrawal(500);
    Alise.show();
    Alise.withdrawal(150);
    Alise.show();
    return 0;
    
}


