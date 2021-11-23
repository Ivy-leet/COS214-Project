#include <iostream>
#include "LaunchCommand.h"
#include "SpaceShuttle.h"
using namespace std;

LaunchCommand::LaunchCommand(SpaceShuttle* r): Command(r)
{
    rocket = r->getRocket();
}

LaunchCommand::~LaunchCommand()
{
    rocket=nullptr;
}
void LaunchCommand::execute()
{
    rocket->mission();

    if (shuttle->getStarlinks()!=nullptr) shuttle->release();
}
