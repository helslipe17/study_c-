//
//  file2.cpp
//  coording
//
//  Created by Дмитрий Цюрко on 05.04.2023.
//

#include <stdio.h>
#include <iostream>
#include <cmath>
#include "coording.hpp"
using namespace std;
polar rect_to_polar(rect xypos){
    polar answer;
    answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);
    return answer;
};
void show_polar(polar dapos){
    const double Rad_to_deg = 57.29577951;
    cout << "радиус = " << dapos.distance;
    cout << ", угол = " << dapos.angle * Rad_to_deg;
    cout << " градусов\n";
}
