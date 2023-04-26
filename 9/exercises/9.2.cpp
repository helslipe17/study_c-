#include <iostream>

#include <string>

void countstr(std::string  str);

int main(){

    std::string input;
    
    std::cout << "Введите строку: " << std::endl;
    getline(std::cin, input);
    do{
        countstr(input);
        std::cout << "Введите новую строку: " << std::endl;
        std::cin.sync();
        getline(std::cin, input);
    } while(input!="");
    
    std::cout << "Good!" << std::endl;
    return 0;
}


void countstr(std::string str){
    static int total = 0;
    int count = 0;
    std::cout << "\"" << str <<"\" содержит ";
    count = str.length();
    total += count;
    std::cout << count << " символов" << std::endl;
    std::cout << "Всего символов - " << total << std::endl;
}
