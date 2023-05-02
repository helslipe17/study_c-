//
//  person.hpp
//  10.2
//
//  Created by Дмитрий Цюрко on 02.05.2023.
//

#ifndef person_hpp
#define person_hpp

#include <stdio.h>
#include <string>


class Person{
private:
    static const int LIMIT = 25;
    std::string lname;
    char fname[LIMIT];
public:
    Person() {lname = ""; fname[0] = '\0'; };
    Person(const std::string & ln, const char * fh = "Heyyou");
    void Show() const;
    void FormalShow()const;
};
#endif /* person_hpp */
