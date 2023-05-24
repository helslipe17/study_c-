//
//  stonewt.hpp
//  11.5_Study
//
//  Created by Дмитрий Цюрко on 11.05.2023.
//

#ifndef stonewt_hpp
#define stonewt_hpp

#include <stdio.h>
class Stonewt{
private:
    enum{Lbs_per_snt = 14};
    int stone;
    double pds_left;
    double pounds;
public:
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();
    void show_lbs()const;
    void show_stn()const;
};
#endif /* stonewt_hpp */
