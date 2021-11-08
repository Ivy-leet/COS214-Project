#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Command.h"

#include <iostream>

using namespace std;

class Controller
{
    private:
        Command* launchC;
        Command* haltC;
    public:
        //Controller(LaunchCommand* l , HaltCommand* h );
        Controller(Command* l, Command* h);
        void launch();
        void halt();

};
#endif
