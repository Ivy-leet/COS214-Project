#ifndef HANDLER_H
#define HANDLER_H

#include "Message.h"

class Handler //Interface for Chain of Responsibility
{
protected:
    /* data */
    Handler* successor;

public:
    virtual void HandleRequest(Message* request) = 0;
    virtual void setNextHandler(Handler* nextH);
    virtual Handler* getNextHandler();
    virtual Handler* clone() = 0;
    virtual void sendRequest() = 0;
    Handler(/* args */);
    ~Handler();
};

#endif


