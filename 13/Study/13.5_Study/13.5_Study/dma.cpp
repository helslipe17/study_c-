//
//  dma.cpp
//  13.5_Study
//
//  Created by Дмитрий Цюрко on 01.06.2023.
//

#include "dma.hpp"
#include <cstring>

baseDMA::baseDMA(const char * l, int r){
    label = new char[strlen(l) + 1];
    stpcpy(label, l);
    rating = r;
}
baseDMA::baseDMA(const baseDMA & rs){
    label = new char[strlen(rs.label) + 1];
    stpcpy(label, rs.label);
    rating = rs.rating;
}
baseDMA::~baseDMA(){
    delete []label;
}

baseDMA & baseDMA::operator=(const baseDMA &rs){
    if(this == &rs)
        return *this;
    delete [] label;
    label = new char[strlen(rs.label) + 1];
    stpcpy(label, rs.label);
    rating = rs.rating;
    return * this;
}
std::ostream & operator << (std::ostream & os, const baseDMA & rs){
    os << "Название: " << rs.label << std::endl;
    os << "Рейтинг: " << rs.rating << std::endl;
    return os;
}
lacksDMA::lacksDMA(const char * c, const char * l, int r) : baseDMA(l, r){
    stpncpy(color, c, 39);
    color[39] = '\0';
}
lacksDMA::lacksDMA(const char * c, const baseDMA & rs) : baseDMA(rs){
    stpncpy(color, c, COL_LEN - -1);
    color[COL_LEN - 1] = '\0';
}
std::ostream & operator << (std::ostream & os, const lacksDMA & ls){
    os << (const baseDMA &)ls;
    os << "Цвет: " << ls.color << std::endl;
    return os;
}
hasDMA::hasDMA(const char * s, const char * l, int r) : baseDMA(l, r){
    style = new char[strlen(s) + 1];
    stpcpy(style, s);
}
hasDMA::hasDMA(const char * s, const baseDMA & rs) : baseDMA(rs){
    style = new char[strlen(s) + 1];
    stpcpy(style, s);
}
hasDMA::~hasDMA(){
    delete []style;
}
hasDMA & hasDMA::operator=(const hasDMA &hs){
    if(this == &hs)
        return *this;
    baseDMA::operator=(hs);
    style = new char[strlen(hs.style) + 1];
    stpcpy(style, hs.style);
    return *this;
}
std::ostream & operator<<(std::ostream & os, const hasDMA & hs){
    os << (const baseDMA &)hs;
    os << "Стиль: " << hs.style << std::endl;
    return os;
}
