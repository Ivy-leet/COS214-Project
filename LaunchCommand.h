#ifndef LAUNCH_COMMAND_H
#define LAUNCH_COMMAND_H

#include <iostream>
#include "Rocket.h"
#include "Command.h"
using namespace std;

class LaunchCommand: public Command
{
    private:
        Rocket* rocket;

    public:
        LaunchCommand(SpaceShuttle* r);
        void execute();
};
#endif
