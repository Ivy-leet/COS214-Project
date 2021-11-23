#ifndef LAUNCH_COMMAND_H
#define LAUNCH_COMMAND_H

#include <iostream>
#include "SpaceShuttle.h"
#include "Rocket.h"
#include "Command.h"
using namespace std;

/**
 * @class LaunchCommand "LaunchCommand.h"
 * @brief Responsible for calling the function that will launch the rocket
*/

class LaunchCommand: public Command
{
    private:
        Rocket* rocket;

    public:
        LaunchCommand(SpaceShuttle* r);
        ~LaunchCommand();

        /**
         * @brief Calls the mission function of the rocket
         * @return void
        */
        void execute();
};
#endif
