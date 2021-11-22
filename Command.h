#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>
#include "Rocket.h"
using namespace std;

/**
 * @class Command "Command.h"
 * @brief Provides an interface for the different commands which will inherit from it
*/

class Command
{
    private:
        Rocket* rocket;
    public:
        Command(Rocket* r);
        virtual void execute()=0;
};
#endif 