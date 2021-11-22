#ifndef HALT_COMMAND_H
#define HALT_COMMAND_H

#include <iostream>
#include "SpaceShuttle.h"
<<<<<<< HEAD
=======
#include "Rocket.h"
>>>>>>> af7f5905369ffd88758adef6e125ee9a93df51ce
#include "Command.h"
using namespace std;

/**
 * @class HaltCommand "HaltCommand.h"
 * @brief 
*/

class HaltCommand: public Command
{
    private:
        Rocket* rocket;
    public:
        HaltCommand(SpaceShuttle* r);
<<<<<<< HEAD

=======
        
>>>>>>> af7f5905369ffd88758adef6e125ee9a93df51ce
        /**
         * @brief Calls the dock function of the rocket
         * @return voids
        */
        void execute();
};
#endif
