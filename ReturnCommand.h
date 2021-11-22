#ifndef RETURN_COMMAND_H
#define RETURN_COMMAND_H

#include <iostream>
#include "SpaceCraft.h"
#include "Command.h"
using namespace std;

/**
 * @class ReturnCommand "ReturnCommand.h"
 * @brief Responsible for calling the function that will return the spacecraft to earth
*/

class ReturnCommand: public Command
{
    private:
        SpaceCraft* craft;

    public:
        ReturnCommand(SpaceShuttle* r);

        /**
         * @brief Calls the rett function of the rocket
         * @return void
        */
        void execute();
};
#endif
