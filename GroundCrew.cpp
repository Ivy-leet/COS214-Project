#include "GroundCrew.h"
#include <iostream>

using namespace std;

void GroundCrew::setNextHandler(Handler *nextH)
{
    this->successor = nextH;
}

void GroundCrew::HandleRequest(Message inMes)
{
    if (inMes.getCommMedium() == "Radio")
        cout<<"The message sent to the ground crew is: "<<inMes.getText()<<endl;
    else
        successor->HandleRequest(inMes);
}