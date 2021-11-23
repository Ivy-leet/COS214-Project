#ifndef GROUNDCREW_H
#define GROUNDCREW_H

#include "Handler.h"

/**
 * @class Handler "Handler.h"
 * @brief Concrete Handler of the Chain of Responsibility design pattern
*/

class GroundCrew : public Handler
{
private:
    /* data */
    
public:
    GroundCrew(/* args */);

    /**
     * @brief Handles request passed in through the parameter
     * @param request Request which needs to be handled
     * @return void
    */
    void HandleRequest(Message* request); //if the message can be handled, notify client
					 //If the current object cannot handle the request, send it to the next
    ~GroundCrew();
    Handler* clone();
    void sendRequest();
};

#endif
