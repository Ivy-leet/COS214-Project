#include <iostream>
#include "Starlink.h"

using namespace std;



Starlink::Starlink()
{
    StarLinkIDInc++;
    StarlinkID = StarLinkIDInc;
    cout<<"Starlink satellite has been created wtith ID: " <<StarlinkID<<endl;
}

Starlink::Starlink(const Starlink& StarL)
{
    this->StarlinkID = StarL.StarlinkID;
}

Starlink* Starlink::clone()
{
    cout<<"New Starlink satellite constructed"<<endl;

    Starlink *SLink = new Starlink();
    

    

    return new Starlink(*this);
}

void Starlink::setNextHandler(Handler *nextH)
{
    this->successor = nextH;
}

void Starlink::HandleRequest(Message inMes)
{
    if (inMes.getCommMedium() == "Laser")
        cout<<"The message sent to the Starlink sattelite is: "<<inMes.getText()<<endl;
    else
        successor->HandleRequest(inMes);
}