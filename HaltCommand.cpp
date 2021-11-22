#include <iostream>
#include "HaltCommand.h"
using namespace std;

HaltCommand::HaltCommand(SpaceShuttle* r): Command(r)
{
    rocket = r->getRocket();
}

void HaltCommand::execute()
{
    rocket->dock();
}
