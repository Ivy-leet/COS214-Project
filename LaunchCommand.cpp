#include <iostream>
#include "LaunchCommand.h"
using namespace std;

LaunchCommand::LaunchCommand(Rocket* r): Command(r)
{
    rocket = r;
}

void LaunchCommand::execute()
{
    rocket->mission();
}
