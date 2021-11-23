#include "GroundCrew.h"
#include <iostream>

using namespace std;

GroundCrew::GroundCrew(){}

void GroundCrew::HandleRequest(Message* inMes)
{
    if (inMes->getCommMedium() == "Radio"){
        cout<<"The message sent to the ground crew is: "<<inMes->getCoord()->confirm()<<inMes->getID()<<endl;
	inMes->handled();
    }else{
        successor->HandleRequest(inMes);
    }
}

Handler* GroundCrew::clone(){
	return NULL;
}

void GroundCrew::sendRequest(){}
