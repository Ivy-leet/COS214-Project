#include <iostream>
#include "ReturnCommand.h"
using namespace std;

ReturnCommand::ReturnCommand(SpaceShuttle* r): Command(r)
{
    craft = r->getSpaceCraft();
}

void ReturnCommand::execute()
{
    craft->ret();
}
