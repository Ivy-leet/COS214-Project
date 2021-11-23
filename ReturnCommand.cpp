#include <iostream>
#include "ReturnCommand.h"
using namespace std;

ReturnCommand::ReturnCommand(SpaceShuttle* r): Command(r)
{
    craft = r->getSpaceCraft();
}

ReturnCommand::~ReturnCommand()
{
    craft=nullptr;
}

void ReturnCommand::execute()
{
    craft->ret();
}
