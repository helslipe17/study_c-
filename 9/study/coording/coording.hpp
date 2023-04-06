//
//  coording.hpp
//  coording
//
//  Created by Дмитрий Цюрко on 05.04.2023.
//

#ifndef coording_hpp
#define coording_hpp

#include <stdio.h>
struct polar{
    double distance;
    double angle;
};
struct rect{
    double x;
    double y;
};
polar rect_to_polar (rect xypos);
void show_polar (polar dapos);
#endif /* coording_hpp */
