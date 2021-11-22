#include <iostream>
#include "LaunchCommand.h"
using namespace std;

LaunchCommand::LaunchCommand(SpaceShuttle* r): Command(r)
{
    rocket = r->getRocket();
}

void LaunchCommand::execute()
{
    rocket->mission();
}
