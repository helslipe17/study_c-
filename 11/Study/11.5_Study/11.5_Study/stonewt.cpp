//
//  stonewt.cpp
//  11.5_Study
//
//  Created by Дмитрий Цюрко on 11.05.2023.
//

#include "stonewt.hpp"
#include <iostream>
using std::cout;
Stonewt::Stonewt(double lbs){
    stone = int(lbs)/Lbs_per_snt;
    pds_left = int(lbs) % Lbs_per_snt + lbs - int(lbs);
    pounds = lbs;
}
Stonewt::Stonewt(int stn, double lbs){
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_snt + lbs;
}
Stonewt::Stonewt(){
    stone = pounds = pds_left = 0;
}
Stonewt::~Stonewt(){}
void Stonewt::show_stn()const{
    cout << stone << " стоунов, " << pds_left << " фунтов\n";
}
void Stonewt::show_lbs()const{
    cout << pounds << " фунтов\n";
}
