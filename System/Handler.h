#ifndef HANDLER_H
#define HANDLER_H


#include "Message.h"

/**
 * @class Handler "Handler.h"
 * @brief Abstract Handler of the Chain of Responsibility design pattern
*/

class Handler //Interface for Chain of Responsibility
{
protected:
    /* data */
    Handler* successor;

public:
    /**
     * @brief Handles request passed in through the parameter
     * @param request Request which needs to be handled
     * @return void
    */
    virtual void HandleRequest(Message* request) = 0;

    /**
     * @brief Sets the successor
     * @param nextH Passes in the next Handler pointer
     * @return void
    */
    virtual void setNextHandler(Handler* nextH);

    /**
     * @brief Returns the successor
     * @return Handler*
    */
    virtual Handler* getNextHandler();

    /**
     * @brief Creates copies of current object
     * @return Handler*
    */
    virtual Handler* clone() = 0;

    /**
     * @brief Starlink suggests a coordinate it would like to be placed at
     * @return void
    */
    virtual void sendRequest() = 0;
    Handler(/* args */);
    ~Handler();
};

#endif


