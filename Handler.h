#include "Message.h"

class Handler //Interface for Chain of Responsibility
{
private:
    /* data */
    Handler* successor;
public:
    virtual void HandleRequest(Message request) = 0;
    virtual void setNextHandler(Handler* nextH) = 0;
    Handler(/* args */);
    ~Handler();
};


