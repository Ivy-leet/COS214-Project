#include "SpaceCraft.h"


SpaceCraft::SpaceCraft(string type) : type(type) {
    numCrew = 0;
    payload = 6000;
    cargoWeight = 0.0;
}

SpaceCraft::~SpaceCraft(){}

double SpaceCraft::getPayload() const {
    return payload;
}

double SpaceCraft::getCargoWeight() const {
    return cargoWeight;
}

void SpaceCraft::setCargoWeight(double c) {
    cargoWeight = c;
}

int SpaceCraft::getNumCrew() {
    return numCrew;
}

void SpaceCraft::setNumCrew(int n) {
    numCrew = n;
}

void SpaceCraft::ret(){
	cout<<"SpaceCraft Returning to Earth."<<endl;
}
