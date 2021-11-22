#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Command.h"

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
    public:
        //Controller(LaunchCommand* l , HaltCommand* h );
        Controller(Command* l, Command* h);

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

};
#endif
