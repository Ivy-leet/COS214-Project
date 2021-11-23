#ifndef STARLINK_H
#define STARLINK_H

#include "Handler.h"
#include <ctime>


class Starlink : public Handler //ConcretePrototype
{

static int StarLinkIDInc ; //to give each starlink satellite a unique identifictation. Incremented whenever new object made

/**
 * @class Starlink "Starlink.h"
 * @brief Concrete Protoype of the Prototype design pattern and Concrete Handler of the Chain of Responsibility design pattern
*/
private:
    /* data */
    int StarlinkID = 0;
    Coordinate* coord;
			 //the next object to handle request
public:
    /**
     * @brief Creates copies of current object
     * @return Handler*
    */
    Handler* clone();

    /**
     * @brief Starlink suggests a coordinate it would like to be placed at
     * @return void
    */
    void sendRequest();

    /**
     * @brief Handles request passed in through the parameter
     * @param request Request which needs to be handled
     * @return void
    */
    void HandleRequest(Message*); //if the message can be handled, notify client
    Starlink(/* args */);
    Starlink(const Starlink& StarL);
    ~Starlink();
};

#endif
