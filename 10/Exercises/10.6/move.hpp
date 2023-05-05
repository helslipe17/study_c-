//
//  move.hpp
//  10.6
//
//  Created by Дмитрий Цюрко on 04.05.2023.
//

#ifndef move_hpp
#define move_hpp

#include <stdio.h>
class Move{
private:
    double x;
    double y;
public:
    Move(double a = 0, double b = 0);
    void showmore()const;
    Move add(const Move & m);
    void reset(double a = 0, double b = 0);
};
#endif /* move_hpp */
