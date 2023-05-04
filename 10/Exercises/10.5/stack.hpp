//
//  stack.hpp
//  10.5
//
//  Created by Дмитрий Цюрко on 04.05.2023.
//

#ifndef stack_hpp
#define stack_hpp

#include <stdio.h>
struct customer{
    char fullname[35];
    double payment;
};

typedef customer Item;

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
#endif /* stack_hpp */
