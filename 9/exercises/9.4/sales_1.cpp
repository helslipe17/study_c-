#include "sales.hpp"
 
int main()
{
    sales::Sales s1;
    sales::set_sales(s1);
    sales::show_sales(s1);
 
    double ar[] = {23221.33, 11111.2, 33333.3, 4444.12};
    sales::Sales s2;
    sales::set_sales(s2, ar, sales::QUARTERS);
    sales::show_sales(s2);
 
    return 0;
}
