//
//  sales.hpp
//  10.4
//
//  Created by Дмитрий Цюрко on 03.05.2023.
//

#ifndef sales_hpp
#define sales_hpp

#include <stdio.h>


namespace sales
{
    const int QUARTERS = 4;

    class Sales{
    private:
        double m_sales[QUARTERS];
        double m_average;
        double m_max;
        double m_min;
        double find_min(const double ar[], int n);
        double find_max(const double ar[], int n);
        double find_average(const double ar[], int n);
    public:
        Sales(){};
        ~Sales(){};
        Sales(const double ar[], const int n);
        void reset_sales();
        void set_sales();
        void show_sales();
    };



    void set_sales(Sales & s, const double ar[], int n);

    void set_sales(Sales & s);

    void show_sales(const Sales & s);
}

#endif /* sales_hpp */
