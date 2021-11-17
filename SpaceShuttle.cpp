
#include "SpaceShuttle.h"
#include "FalconNine.h"
#include "FalconHeavy.h"

SpaceShuttle::SpaceShuttle() : spaceCraft(nullptr), rocket(nullptr) {}


SpaceShuttle::SpaceShuttle(SpaceShuttle* s) {
    SpaceShuttle* temp=new SpaceShuttle();

    this->addRocket(s->getRocket());
    this->addSpaceCraft(s->getSpaceCraft());
    this->addStarlinks(s->getStarlinks().size());
}

SpaceShuttle::~SpaceShuttle() {
    delete rocket;
    delete spaceCraft;
}

/**
 * Maximum number of reuses of a rocket is 10
 * If less, add to for_reuse queue.
 * If equal or more, delete (write-off)
 * 
 * @param r Rocket to be reused or written-off
 * **/

// void SpaceShuttle::rocketReuse(Rocket* r) {
//     if (r->getNumReuses()>=10) delete r;
//     else for_reuse.push(r);
// }

/**
 * Function responsible for adding a rocket to a SpaceShuttle object
 * @param r - pointer to a Rocket object of type FalconNine or FalconHeavy
 * @return void
 */
void SpaceShuttle::addRocket(Rocket *r) {
    rocket = r;
}

/**
 * Function responsible for adding a spacecraft to a SpaceShuttle object
 * @param t - pointer to a SpaceCraft objecy of type CrewDragon or Dragon
 * @return void
 */
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

/**
 * Test section for the rockets. 
 * **/





