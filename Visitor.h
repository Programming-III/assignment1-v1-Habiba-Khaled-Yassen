#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

class Visitor {
    string visitorName;
    int ticketsBought;
public:
    Visitor(string v,int t) {
        visitorName= v ;
        ticketsBought=t;

    }
    Visitor() {
        visitorName="unknown";
        ticketsBought=0;

    }
    void displayInfo();
    ~Visitor(){}
    string getVisitorName();
    int getTicketsBought();




};


#endif
