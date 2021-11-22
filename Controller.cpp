#include "Controller.h"
#include <iostream>

using namespace std;

//Controller::Controller(LaunchCommand* l , HaltCommand* h )
Controller::Controller(Command* l, Command* h, Command* r)
{
    launchC = l;
    haltC = h;
    returnC = r;
}

void Controller::launch()
{
    launchC->execute();
}

void Controller::halt()
{
    haltC->execute();
}

void Controller::ret()
{
    returnC->execute();
}
