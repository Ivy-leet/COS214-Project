#ifndef LAUNCH_COMMAND_H
#define LAUNCH_COMMAND_H

#include <iostream>
#include "SpaceShuttle.h"
#include "Rocket.h"
#include "Command.h"
using namespace std;

/**
 * @class Command "Command.h"
 * @brief Provides an interface for the different commands which will inherit from it
*/

class LaunchCommand: public Command
{
    private:
        Rocket* rocket;

    public:
        LaunchCommand(SpaceShuttle* r);
        void execute();
};
#endif
