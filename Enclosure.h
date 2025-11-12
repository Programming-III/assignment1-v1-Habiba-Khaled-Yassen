#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

class Enclosure {

    Animal* animal[];
    int capacity;
    int currentCount;
public:
    Enclosure(int c,int cc) {
        capacity =c;
        currentCount=cc;
    }
    Enclosure() {
        capacity =0;
        currentCount=0;
    }
    void addAnimal(Animal *a);
    void displayAnimals();

    ~Enclosure(){};

};




#endif
