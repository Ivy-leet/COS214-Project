#include "Controller.h"
#include <iostream>

using namespace std;

Controller::Controller(Command* l, Command* h, Command* r)
{
    launchC = l;
    haltC = h;
    returnC = r;
}

Controller::~Controller()
{
    delete launchC;
    delete haltC;
    delete returnC;
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
