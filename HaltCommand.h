#ifndef HALT_COMMAND_H
#define HALT_COMMAND_H

#include <iostream>
#include "Rocket.h"
#include "Command.h"
using namespace std;

class HaltCommand: public Command
{
    private:
        Rocket* rocket;
    public:
        HaltCommand(Rocket* r);
        void execute();
};
#endif
