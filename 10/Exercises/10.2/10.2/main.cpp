//
//  main.cpp
//  10.2
//
//  Created by Дмитрий Цюрко on 02.05.2023.
//

#include <iostream>
#include "person.hpp"

int main() {
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy","Sam");
    one.Show();
    one.FormalShow();
    two.Show();
    two.FormalShow();
    three.Show();
    three.FormalShow();
    return 0;
}
