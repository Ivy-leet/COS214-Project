#include "SpaceCraft.h"

SpaceCraft::SpaceCraft(string type) : type(type) {
    numCrew = 0;
    payload = 0;
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

void SpaceCraft::setNumCrew(int num) {
    numCrew=num;
}
