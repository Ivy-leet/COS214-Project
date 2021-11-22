#ifndef RETURN_COMMAND_H
#define RETURN_COMMAND_H

#include <iostream>
#include "SpaceCraft.h"
#include "Command.h"
using namespace std;

class ReturnCommand: public Command
{
    private:
        SpaceCraft* craft;

    public:
        ReturnCommand(SpaceShuttle* r);
        void execute();
};
#endif
