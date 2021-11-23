#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Command.h"
#include "SpaceShuttle.h"

#include <iostream>

using namespace std;

/**
 * @class Controller "Controller.h"
 * @brief The invoker of the Command pattern
*/

class Controller
{
    private:
        Command* launchC;
        Command* haltC;
	Command* returnC;

    public:
        //Controller(LaunchCommand* l , HaltCommand* h );
        Controller(Command*, Command*, Command*);

        ~Controller();

        /**
         * @brief Executes the launch command
         * @return void
        */
        void launch();

        
        /**
         * @brief Executes the halt command
         * @return void
        */
        void halt();
	    void ret();
};
#endif
