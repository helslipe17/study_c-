//
//  main.cpp
//  10.4
//
//  Created by Дмитрий Цюрко on 03.05.2023.
//

#include <iostream>
#include "sales.hpp"

int main() {
    double ar[] = {225056.55, 340742.15, 410123.35, 270521.25};
    sales::Sales s1;
    s1 = sales::Sales(ar, 4);
    s1.show_sales();
    s1.reset_sales();
    s1.set_sales();
    s1.show_sales();
    return 0;
}
