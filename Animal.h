#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

//define animal class here 
class Animal {
    string name;
    int age;
    bool isHungry;
public:
    Animal(string n,int a) {
        name =n;
        age=a;

    }
    Animal() {
        name="unknown";
        age=0;
    }
    ~Animal(){}
    string getName( );
    int getAge() ;

    void display();
    void feed();

};
class Mammel: Animal{
    string furColor;
};
class Bird: Animal{
    float wingSpan;
};
class Reptile: Animal{
    bool isVenomous;
};


#endif
