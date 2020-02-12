#include "helper.h"
#include <iostream>
#include <thread>
#include <list>

Helper::Helper()
{
    this->upgradeflag = true;

    this->createRandomPopulation();
}

void Helper::createRandomPopulation(){
    //TODO Change 10 to a parameter ?
    std::list<Point> * temp = new list<Point>();
    for (int i = 0; i < 10; i++){
        Point * p = new Point(std::rand()%21-10,std::rand()%21-10);
        this->listOfPoints[i] = p;
        //std::cout <<p->getX()<<"\n";
        temp->push_front(*p);
    }


    //TODO add nouveaux elements à map (Random)
    for (int i = 0; i < numberOfCircuits; i++){
        //Seems like this->map used here throws a copy to the Circuit constructor
        Circuit * c = new Circuit(this->listOfPoints);
        c->randomize();//TODO Do here ? Or thread ?
        this->oldCircuits[i] = c;
        //std::cout << c->map[i%10]->getY()<<"\n";
    }
}

void Helper::reprod(int index){

    for (int i = index*numberOfCircuits/numberOfThreads; i < (index+1)*numberOfCircuits/numberOfThreads; i++){
        //Reprod between 0 & 15; 16 & 31...
    }
}

void Helper::manage(){

    while(this->upgradeflag){

    //Create 4 arrays for circuits, one for each Thread we'll make
    /*for (int i = 0; i < 4; i++){
        for (int j = i; j < numberOfCircuits; j+=4){
            //list circuits a l'indice i

        }
    }*/

    //TODO : Extract in functions
    //REPRODUCTION
    std::thread firstThread (reprod, 0);
    std::thread secondThread (reprod, 1);
    std::thread thirdThread (reprod, 2);
    std::thread fourthThread (reprod, 3);

    firstThread.join();
    secondThread.join();
    thirdThread.join();
    fourthThread.join();

    std::cout<<"End";

    //\REPRODUCTION

    //MUTATION



    //\MUTATION

    //SELECTION



    //\SELECTION

    //Update flag 3% d'upgrade
    //Set upgrade flag to false if upgrade < 3%
    upgradeflag = false;

    }
}
