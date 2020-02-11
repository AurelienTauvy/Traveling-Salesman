#include "circuit.h"
#include <iostream>
#include <vector>
#include <algorithm>    // std::random_shuffle

Circuit::Circuit(Point * listOfPoints[10])
{
    for (int i = 0; i < 10; i++){
        this->map[i] = listOfPoints[i];
    }
    this->randomize();
}
void Circuit::randomize(){
    Point * oldMap[10];

    //std::cout<< std::endl << "Olds :" << std::endl;
    for (int i = 0; i < 10; i++){
        oldMap[i] = this->map[i];
        //std::cout<<this->map[i]->getX() << ";";
    }

    std::vector<int> temp;
    for (int i=0; i<10; ++i){
        temp.push_back(i); // 0 1 2 3 4 5 6 7 8 9
    }
     // using built-in random generator:
    std::random_shuffle ( temp.begin(), temp.end());

    for (int i = 0; i < 10; i++){
        this->map[i] = oldMap[temp.at(i)];
    }

//    std::cout<< std::endl << "News :" << std::endl;
//    for (int i = 0; i < 10; i++){
//        std::cout<<this->map[i]->getX() << ";";
//    }

}
