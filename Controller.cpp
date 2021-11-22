#include "Controller.h"
#include <iostream>

using namespace std;

//Controller::Controller(LaunchCommand* l , HaltCommand* h )
Controller::Controller(Command* l, Command* h)
{
    launchC = l;
    haltC = h;
}

void Controller::launch()
{
    launchC->execute();
}

void Controller::halt()
{
    haltC->execute();
}
