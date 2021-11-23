#include <iostream>
#include "Starlink.h"

using namespace std;



Starlink::Starlink()
{
    StarLinkIDInc++;
    StarlinkID = StarLinkIDInc;
    cout<<"Starlink satellite has been created wtith ID: " <<StarlinkID<<endl;
    coord=new Coordinate(-9999,-9999);
}

Starlink::Starlink(const Starlink& StarL)
{
    StarLinkIDInc++;
    this->StarlinkID = StarLinkIDInc;
    this->coord=new Coordinate(-9999,-9999);
}

Starlink::~Starlink() {}

Handler* Starlink::clone()
{
    cout<<"New Starlink satellite constructed"<<endl;

    Handler *SLink = new Starlink();
    
    return new Starlink(*this);
}

void Starlink::sendRequest(){
    if (this->coord->getX()!=-9999) return;
	Message* mes=new Message("Laser", new Coordinate(-45+(rand()%(45+45+1)),-45+(rand()%(45+45+1))), StarlinkID);
    Handler* first=getNextHandler();
	Handler* star=getNextHandler();
	while(star->getNextHandler()!=first){
		star->HandleRequest(mes);
        star=star->getNextHandler();
	}
    star=first;
    // cout<<"Here\n";

	if(mes->getApprov()){
        coord=mes->getCoord();
                mes=new Message("Radio", coord, StarlinkID);
		while(!mes->isHandled() && star!=nullptr){
			star->HandleRequest(mes);
            star=star->getNextHandler();
		}
		return;
        }else{

                cout<<"The message sent to the Starlink satellite "<<mes->getID()<<" is: "+mes->getText()<<endl<<endl;
        }

    // if (coord->getX()==-9999)
	sendRequest();
}

void Starlink::HandleRequest(Message* inMes)
{
        if (inMes->getCommMedium() == "Laser"){
        if(inMes->getCoord()->compare(coord)){
		inMes->disapprove(StarlinkID);
		cout<<endl;
        	cout<<"The message sent to the Starlink "<<StarlinkID<<" is: "+inMes->getCoord()->request()<<" by Starlink "<<inMes->getID()<<endl;
	}
    }else{
        if (successor==nullptr) return;
        successor->HandleRequest(inMes);
    }
}
