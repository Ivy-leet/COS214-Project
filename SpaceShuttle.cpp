
#include "SpaceShuttle.h"
#include "FalconNine.h"
#include "FalconHeavy.h"
#include "CrewDragon.h"
#include "Dragon.h"

SpaceShuttle::SpaceShuttle() : spaceCraft(nullptr), rocket(nullptr) {}


SpaceShuttle::~SpaceShuttle() {
    rocket=nullptr;
    spaceCraft=nullptr;
}

SpaceShuttle* SpaceShuttle::clone() {
    SpaceShuttle* temp=new SpaceShuttle();
    
    temp->addRocket(this->getRocket());
    temp->addSpaceCraft(this->getSpaceCraft());
    temp->addStarlinks(this->getStarlinks().size());

    return temp;
}

void SpaceShuttle::addRocket(Rocket *r) {
    rocket = r;
}

void SpaceShuttle::addSpaceCraft(SpaceCraft *s) {
    spaceCraft = s;
}

void SpaceShuttle::addStarlinks(int num) {
    Starlink* starlink = new Starlink();

    for (int i=0;i<num; i++)
        starlinks.push_back(starlink->clone());

    delete starlink;
}

double SpaceShuttle::getTotalWeight() const {
    return rocket->getWeight() + spaceCraft->getCargoWeight() + starlinks.size() * 260;
}

double SpaceShuttle::getTotalCost() const {
    return rocket->getCost() + spaceCraft->getCost() + starlinks.size() * 1000000;
}

void SpaceShuttle::shuttleInfo() {
    cout <<"\033[37m"<< "SPACE SHUTTLE INFORMATION:\n";
    rocket->rocketInfo();
    cout << endl;
    spaceCraft->spaceCraftInfo();
    cout << endl;
}

Rocket *SpaceShuttle::getRocket() {
    return rocket;
}

SpaceCraft *SpaceShuttle::getSpaceCraft() {
    return spaceCraft;
}

vector<Starlink*> SpaceShuttle::getStarlinks() {
    return starlinks;
}





