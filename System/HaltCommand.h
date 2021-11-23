#ifndef HALT_COMMAND_H
#define HALT_COMMAND_H

#include <iostream>
#include "SpaceShuttle.h"
#include "Rocket.h"
#include "Command.h"
using namespace std;

/**
 * @class HaltCommand "HaltCommand.h"
 * @brief Responsible for stopping a rocket
*/

class HaltCommand: public Command
{
    private:
        Rocket* rocket;
    public:
        HaltCommand(SpaceShuttle* r);
        ~HaltCommand();
        
        /**
         * @brief Calls the dock function of the rocket
         * @return voids
        */
        void execute();
};
#endif
