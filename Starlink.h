#ifndef STARLINK_H
#define STARLINK_H

#include "Handler.h"
#include <ctime>

class Starlink : public Handler //ConcretePrototype
{

static int StarLinkIDInc ; //to give each starlink satellite a unique identifictation. Incremented whenever new object made

private:
    /* data */
    int StarlinkID = 0;
    Coordinate* coord;
			 //the next object to handle request
public:
    Handler* clone();
    void sendRequest();
    void HandleRequest(Message*); //if the message can be handled, notify client
    Starlink(/* args */);
    Starlink(int a);
    Starlink(const Starlink& StarL);
    ~Starlink();
};

#endif
