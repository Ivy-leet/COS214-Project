#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>
#include "SpaceShuttle.h"
using namespace std;

/**
 * @class Command "Command.h"
 * @brief Provides an interface for the different commands which will inherit from it
*/

class Command
{
    private:
        SpaceShuttle* shuttle;

    public:
        Command(SpaceShuttle* r);
        virtual void execute()=0;
};
#endif 
