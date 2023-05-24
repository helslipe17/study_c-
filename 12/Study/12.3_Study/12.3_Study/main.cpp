//
//  main.cpp
//  12.3_Study
//
//  Created by Дмитрий Цюрко on 20.05.2023.
//

#include <iostream>
#include <string>
#include <new>
using namespace std;

const int BUF = 512;

class JustTesting{
private:
    string words;
    int number;
public:
    JustTesting(const string & s = "Just Testing", int n = 0)
    {words = s; number = n; cout << words << " создан\n";}
    ~JustTesting(){ cout << words << " уничтожен\n";}
    void Show()const {cout << words << ", " << number << endl;}
};

int main() {
    char * buffer = new char[BUF];
    JustTesting *pc1, *pc2;
    
    pc1 = new (buffer) JustTesting;
    pc2 = new JustTesting("Heap1", 20);
    
    cout << "Адреса блоков памяти:\n" << "буфер: ";
    cout << (void *) buffer << " куча: " << pc2 << endl;
    cout << "Содержимое памяти:\n";
    cout << pc1 << ": ";
    pc1->Show();
    cout << pc2 << ": ";
    pc2->Show();
    
    JustTesting *pc3, *pc4;
    pc3 = new(buffer + sizeof(JustTesting)) JustTesting("Better Idea", 6);
    pc4 = new JustTesting("Heap2", 10);
    cout << "Содержимое памяти:\n";
    cout << pc3 << ": ";
    pc3->Show();
    cout << pc4 << ": ";
    pc4->Show();
    
    delete pc2;
    delete pc4;
    pc3->~JustTesting();
    pc1->~JustTesting();
    delete [] buffer;
    cout << "Готово\n";
    return 0;
}
