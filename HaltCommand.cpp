#include <iostream>
#include "HaltCommand.h"
using namespace std;

HaltCommand::HaltCommand(SpaceShuttle* r): Command(r)
{
    rocket = r->getRocket();
}

HaltCommand::~HaltCommand()
{
    rocket=nullptr;
}

void HaltCommand::execute()
{
    rocket->dock();
}
