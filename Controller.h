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
<<<<<<< HEAD
        Command* returnC;

    public:
        //Controller(LaunchCommand* l , HaltCommand* h );
        Controller(Command* l, Command* h, Command* r);
=======
	Command* returnC;

    public:
        //Controller(LaunchCommand* l , HaltCommand* h );
        Controller(Command*, Command*, Command*);
>>>>>>> af7f5905369ffd88758adef6e125ee9a93df51ce

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
<<<<<<< HEAD

        void ret();

=======
	    void ret();
>>>>>>> af7f5905369ffd88758adef6e125ee9a93df51ce
};
#endif
