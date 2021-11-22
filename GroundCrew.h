#ifndef GROUNDCREW_H
#define GROUNDCREW_H

#include "Handler.h"

class GroundCrew : public Handler
{
private:
    /* data */
    Handler* successor;
public:
    GroundCrew(/* args */);
    void HandleRequest(Message request); //if the message can be handled, notify client
    void setNextHandler(Handler* nextH); //If the current object cannot handle the request, send it to the next
    ~GroundCrew();
};

#endif
