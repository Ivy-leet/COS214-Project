#include <iostream>
#include "Command.h"
using namespace std;

Command::Command(SpaceShuttle* r)
{
    shuttle = r;
}

Command::~Command() 
{
    shuttle=nullptr;
}
