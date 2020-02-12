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
    Point * listOfPoints[10];
    int static const numberOfThreads = 4;
    int static const numberOfCircuits = 64;
    Circuit * oldCircuits[numberOfCircuits];
    Circuit * newCircuits[numberOfCircuits];

    bool upgradeflag;
    //Circuit circuits[numberOfCircuits];

    void manage();//TODO
private:
    void createRandomPopulation();//TODO ou delete ?
    void static reprod(int index);//TODO THREAD
    /*void mutate();//TODO
    void select();//TODO*/
};

#endif // HELPER_H
