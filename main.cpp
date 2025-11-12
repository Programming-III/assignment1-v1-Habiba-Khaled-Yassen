#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;
void Animal::display() {
    cout<<"Name: "<<name<< ", is Hungry: "<<isHungry<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"is Hungry: "<<isHungry<<endl;

}  string Animal:: getName( ) {
        return name;
    }
    int Animal::getAge() {
        return age;
    }

void Enclosure::addAnimal(Animal *a) {
    animal.add[a];
}
void Enclosure::displayAnimals() {
    cout<<"Animals";
    for (int i=0 ;i<currentCount;i++) {
        cout <<a[i];
    }

}

void Visitor:: displayInfo() {

    cout<<"visitor Name"<<visitorName<<endl;
    cout<<"tickets Bought "<<ticketsBought<<endl;
}
string Visitor:: getVisitorName() {
    return name;
}
int Visitor::getTicketsBought() {
    return ticketsBought;
}




// ============== MAIN FUNCTION ==============
int main() {
    
        Enclosure e1(10,3);
    Visitor v1("nour",5);
    e1.displayAnimals();
    v1.displayInfo();
    
    return 0;
}
