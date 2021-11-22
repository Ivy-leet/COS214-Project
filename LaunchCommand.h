#ifndef LAUNCH_COMMAND_H
#define LAUNCH_COMMAND_H

#include <iostream>
#include "Rocket.h"
#include "Command.h"
using namespace std;

/**
 * @class LaunchCommand "LaunchCommand.h"
 * @brief
*/

class LaunchCommand: public Command
{
    private:
        Rocket* rocket;
    public:
        LaunchCommand(Rocket* r);

        /**
         * @brief Calls the mission command of the rocket
         * @return void
        */
        void execute();
};
#endif
