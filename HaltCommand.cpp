#include <iostream>
#include "HaltCommand.h"
using namespace std;

HaltCommand::HaltCommand(Rocket* r): Command(r)
{
    rocket = r;
}

void HaltCommand::execute()
{
    rocket->dock();
}
