#include "Handler.h"


Handler::Handler() {}

Handler::~Handler() {
    delete successor;
}

void Handler::setNextHandler(Handler *nextH)
{
    this->successor = nextH;
}

Handler* Handler::getNextHandler()
{
    return this->successor;
}
