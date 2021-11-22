#ifndef STARLINK_H
#define STARLINK_H

#include "Handler.h"

class Starlink : public Handler //ConcretePrototype
{

static int StarLinkIDInc ; //to give each starlink satellite a unique identifictation. Incremented whenever new object made

private:
    /* data */
    int StarlinkID = 0;
    Handler *successor; //the next object to handle request
public:
    Handler* clone();
    virtual void setNextHandler(Handler *nextH); //If the current object cannot handle the request, send it to the next
    virtual Handler* getNextHandler();
    virtual void HandleRequest(Message inMes); //if the message can be handled, notify client
    Starlink(/* args */);
    Starlink(int a);
    Starlink(const Starlink& StarL);
    ~Starlink();
};

#endif
