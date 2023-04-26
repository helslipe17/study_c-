
namespace sales
{
    const int QUARTERS = 4;
 
    struct Sales
    {
        double m_sales[QUARTERS] = {0,0,0,0};
        double m_average = 0;
        double m_max = 0;
        double m_min = 0;
    };
 
    double find_min(const double ar[], int n);
 
    double find_max(const double ar[], int n);
 
    double find_average(const double ar[], int n);
 
    void set_sales(Sales & s, const double ar[], int n);

    void set_sales(Sales & s);
 
    void show_sales(const Sales & s);
}
 
