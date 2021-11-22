#include "Satellite.h"
#include "Handler.h"

class Starlink : public Satellite, Handler //ConcretePrototype
{

static int StarLinkIDInc ; //to give each starlink satellite a unique identifictation. Incremented whenever new object made

private:
    /* data */
    int StarlinkID = 0;
    Handler *successor; //the next object to handle request
public:
    Starlink* clone();
    void setNextHandler(Handler *nextH); //If the current object cannot handle the request, send it to the next
    void HandleRequest(Message inMes); //if the message can be handled, notify client
    Starlink(/* args */);
    Starlink(const Starlink& StarL);
    ~Starlink();
};
