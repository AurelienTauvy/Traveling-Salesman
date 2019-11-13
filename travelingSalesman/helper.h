#ifndef HELPER_H
#define HELPER_H

#include "circuit.h"
#include "point.h"
#include <list>
#include <thread>

using namespace std;

class Helper
{
public:
    Helper();
    list <Point> map;
    int static const numberOfCircuits = 64;
    list <Circuit> circuits;

    bool upgradeflag;
    //Circuit circuits[numberOfCircuits];

    void manage();//TODO
private:
    void createPopulation();//TODO ou delete ?
    void reprod();//TODO THREAD
    void mutate();//TODO
    void select();//TODO
};

#endif // HELPER_H
