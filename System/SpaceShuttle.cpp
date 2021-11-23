#include "SpaceShuttle.h"
#include "FalconNine.h"
#include "FalconHeavy.h"
#include "CrewDragon.h"
#include "Dragon.h"



SpaceShuttle::SpaceShuttle() : spaceCraft(nullptr), rocket(nullptr), starlinks(nullptr) {}


SpaceShuttle::~SpaceShuttle() {
    rocket=nullptr;
    spaceCraft=nullptr;
    starlinks=nullptr;
}

SpaceShuttle* SpaceShuttle::clone() {
    SpaceShuttle* temp=new SpaceShuttle();
    
    temp->addRocket(this->getRocket());
    temp->addSpaceCraft(this->getSpaceCraft());

    return temp;
}

void SpaceShuttle::addRocket(Rocket *r) {
    rocket = r;
}

void SpaceShuttle::addSpaceCraft(SpaceCraft *s) {
    spaceCraft = s;
}

void SpaceShuttle::addStarlinks(int num, Handler* gCrew) {

    numOfStarlinks=num;

    Handler* starlink=new Starlink(); 
    gCrew->setNextHandler(starlink);
    starlinks=starlink;

    Handler* s=starlinks;


    for (int i=1;i<num; i++)
    {
        s->setNextHandler(s->clone());
        s=s->getNextHandler();
    }
    s->setNextHandler(gCrew);
}

int SpaceShuttle::getNumOfStarlinks() {
    return numOfStarlinks;
}

double SpaceShuttle::getTotalWeight() const {
    return rocket->getWeight() + spaceCraft->getCargoWeight() + numOfStarlinks * 260;
}

double SpaceShuttle::getTotalCost() const {
    return rocket->getCost() + spaceCraft->getCost() + numOfStarlinks * 1000000;
}

void SpaceShuttle::shuttleInfo() {
    cout <<"\033[37m"<< "SPACE SHUTTLE INFORMATION:\n";
    rocket->rocketInfo();
    cout << endl;
    if (spaceCraft)spaceCraft->spaceCraftInfo();
    cout << endl;
}

Rocket *SpaceShuttle::getRocket() {
    return rocket;
}

SpaceCraft *SpaceShuttle::getSpaceCraft() {
    return spaceCraft;
}

Handler* SpaceShuttle::getStarlinks() {
    return starlinks;
}

void SpaceShuttle::release() {
    cout<<"Starlink Release Sequence Initiated"<<endl<<endl;
    Handler* s=starlinks;

    while (s->getNextHandler()!=starlinks) {
        s->sendRequest();
        s=s->getNextHandler();
    }

    cout<<endl;

    cout<<"Starlink Release has Ended"<<endl<<endl;
}





