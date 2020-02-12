#include "helper.h"
#include <iostream>
#include <list>

Helper::Helper()
{
    this->upgradeflag = true;

    //TODO Change 10 to a parameter ?
    std::list<Point> * temp = new list<Point>();
    for (int i = 0; i < 10; i++){
        Point * p = new Point(std::rand()%21-10,std::rand()%21-10);
        this->listOfPoints[i] = p;
        std::cout <<p->getX()<<"\n";
        temp->push_front(*p);
    }


    //TODO add nouveaux elements à map (Random)
    for (int i = 0; i < numberOfCircuits; i++){
        //Seems like this->map used here throws a copy to the Circuit constructor
        Circuit * c = new Circuit(this->listOfPoints);
        c->randomize();//TODO Do here ? Or thread ?
        this->circuits[i] = c;
        //std::cout << c->map[i%10]->getY()<<"\n";
    }

    /*thread v(fonction, param1, param2);
    v.join();*/

}

void Helper::manage(){

    while(this->upgradeflag){

        //Create 4 arrays for circuits, one for each Thread we'll make
    for (int i = 0; i < 4; i++){
        for (int j = i; j < numberOfCircuits; j+=4){
            //list circuits a l'indice i

        }
    //new thread qui gère la reprod de ce tableau
    }

    //TODO : Extract in functions
    //REPRODUCTION


    //\REPRODUCTION

    //MUTATION



    //\MUTATION

    //SELECTION



    //\SELECTION

    //Update flag 3% d'upgrade

    }
}
