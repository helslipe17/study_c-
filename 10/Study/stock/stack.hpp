//
//  stock1.hpp
//  stock
//
//  Created by Дмитрий Цюрко on 29.04.2023.
//

#ifndef stack_hpp
#define stack_hpp
#include <stdio.h>
typedef unsigned long Item;

class Stack{
private:
    enum {MAX = 10};
    Item items[MAX];
    int top;
public:
    Stack();
    bool isempty()const;
    bool isfull()const;
    bool push(const Item & item);
    bool pop(Item & item);
};
#endif /* stock1_hpp */
