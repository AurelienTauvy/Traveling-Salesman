#include "point.h"

Point::Point(int x, int y)
{
    this->x = x;
    this->y = y;
}

int Point::getX(){
    return this->x;
}

int Point::getY(){
    return this->y;
}
bool Point::equals(Point p){
    //TODO check if p is valid
    if (p.getX() == this->x && p.getY() == this->y){
        return true;
    } else{
        return false;
    }
}
