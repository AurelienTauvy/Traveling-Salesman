#ifndef CIRCUIT_H
#define CIRCUIT_H

#include <list>
#include "point.h"


class Circuit
{
public:
    Circuit(std::list <Point>);
    int calculateRange();//TODO (Thread le calcul ?)
private:
    std::list <Point> map;
};

#endif // CIRCUIT_H
