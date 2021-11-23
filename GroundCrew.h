#ifndef GROUNDCREW_H
#define GROUNDCREW_H

#include "Handler.h"

class GroundCrew : public Handler
{
private:
    /* data */
    
public:
    GroundCrew(/* args */);
    void HandleRequest(Message* request); //if the message can be handled, notify client
					 //If the current object cannot handle the request, send it to the next
    ~GroundCrew();
    Handler* clone();
    void sendRequest();
};

#endif
