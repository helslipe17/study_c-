//
//  sales.cpp
//  10.4
//
//  Created by Дмитрий Цюрко on 03.05.2023.
//

#include <iostream>
#include "sales.hpp"
namespace sales{
Sales::Sales(const double ar[], const int n){
    for (int i = 0; i < n; ++i)
    {
        if (m_sales[i] == 0)
        {
            m_sales[i] = find_min(ar, QUARTERS);
            if (i+1 < n)
            {
                for (int j = i+1; j < n; ++j)
                    m_sales[j] = 0;
            }
            break;
        }
    }
}
void Sales::reset_sales(){
    for (int i = 0; i < QUARTERS; ++i)
                m_sales[i] = 0;
}
void Sales::set_sales(){
    for (int i = 0; i < QUARTERS; ++i)
            {
                std::cout << "\nВведите общий обьем продаж за "
                          << i+1 << " квартал: ";
                std::cin >> m_sales[i];
            }
            m_average = find_average(m_sales, QUARTERS);
            m_max = find_max(m_sales, QUARTERS);
            m_min = find_min(m_sales, QUARTERS);
}
void Sales::show_sales(){
    std::cout << "\nСреднее значение: " << m_average << std::endl;
    std::cout << "Максимальное значение: " << m_max << std::endl;
    std::cout << "Минимальное значение: " << m_min << std::endl;
}
double Sales::find_min(const double *ar, int n){
    double min_value = ar[0];
            for (int i = 1; i < n; ++i)
                if (ar[i] < min_value)
                    min_value = ar[i];
            return min_value;
}
double Sales::find_max(const double *ar, int n){
    double max_value = ar[0];
            for (int i = 1; i < n; ++i)
                if (ar[i] > max_value)
                    max_value = ar[i];
    
            return max_value;
}
double Sales::find_average(const double *ar, int n){
    double sum = 0;
            for (int i = 0; i < n; ++i)
                    sum += ar[i];
    
            return sum/n;
}
}

//namespace sales
//{
//    double find_min(const double ar[], int n)
//    {
//        double min_value = ar[0];
//        for (int i = 1; i < n; ++i)
//            if (ar[i] < min_value)
//                min_value = ar[i];
//
//        return min_value;
//    }
//
//    double find_max(const double ar[], int n)
//    {
//        double max_value = ar[0];
//        for (int i = 1; i < n; ++i)
//            if (ar[i] > max_value)
//                max_value = ar[i];
//
//        return max_value;
//    }
//
//    double find_average(const double ar[], int n)
//    {
//        double sum = 0;
//        for (int i = 0; i < n; ++i)
//                sum += ar[i];
//
//        return sum/n;
//    }
//
//    void set_sales(Sales & s, const double ar[], int n)
//    {
//        for (int i = 0; i < n; ++i)
//        {
//            if (s.m_sales[i] == 0)
//            {
//                s.m_sales[i] = find_min(ar, QUARTERS);
//                if (i+1 < n)
//                {
//                    for (int j = i+1; j < n; ++j)
//                        s.m_sales[j] = 0;
//                }
//                break;
//            }
//        }
//
//        s.m_average = find_average(ar, n);
//        s.m_max = find_max(ar, n);
//        s.m_min = find_min(ar, n);
//    }
//    void set_sales(Sales & s)
//    {
//        for (int i = 0; i < QUARTERS; ++i)
//        {
//            std::cout << "\nВведите общий обьем продаж за "
//                      << i+1 << " квартал: ";
//            std::cin >> s.m_sales[i];
//        }
//        s.m_average = find_average(s.m_sales, QUARTERS);
//        s.m_max = find_max(s.m_sales, QUARTERS);
//        s.m_min = find_min(s.m_sales, QUARTERS);
//    }
//
//    void show_sales(const Sales & s)
//    {
//        std::cout << "\nСреднее значение: " << s.m_average << std::endl;
//        std::cout << "Максимальное значение: " << s.m_max << std::endl;
//        std::cout << "Минимальное значение: " << s.m_min << std::endl;
//    }
//}
