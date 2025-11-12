#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

class Mammel: Animal{
    string furColor;
Mammel( string fc){
furColor=fc;
}
Mammel(){
  furColor="unknown";
}
};

#endif
