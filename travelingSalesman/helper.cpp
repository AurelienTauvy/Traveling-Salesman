#include "helper.h"

Helper::Helper()
{
    this->upgradeflag = true;


    this->map = list<Point>(0);
    //TODO add nouveaux elements à map (Random)

    this->circuits = list<Circuit>(0);
    for (int i = 0; i < numberOfCircuits; i++){

        //Seems like this->map used here throws a copy to the Circuit constructor
        Circuit * c = new Circuit(this->map);
        this->circuits.push_back(*c);
    }

    /*thread v(fonction, param1, param2);
    v.join();*/
}

void Helper::manage(){

    while(this->upgradeflag){
    //REPRODUCTION
    for (int i = 0; i < 4; i++){
        for (int j = i; j < numberOfCircuits; j+=4){
            //list circuits a l'indice i

        }
    //new thread qui gère la reprod de ce tableau
    }

    //join les threads ??

    //\REPRODUCTION

    //MUTATION



    //\MUTATION

    //SELECTION



    //\SELECTION

    //Update flag 3% d'upgrade

    }
}
