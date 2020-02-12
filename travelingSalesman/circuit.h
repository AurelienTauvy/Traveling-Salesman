#ifndef CIRCUIT_H
#define CIRCUIT_H

#include <list>
#include <iostream>
#include "point.h"


class Circuit
{
public:
    Circuit(Point *[10]);
    void randomize();
    Point * getPoint(int index);
    bool equals(Circuit circuitToCompare);
    int calculateRange();//TODO (Thread le calcul ?)
private:
    Point * map[10];
};

#endif // CIRCUIT_H
