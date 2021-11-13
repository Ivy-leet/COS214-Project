#include "SpaceCraft.h"

SpaceCraft::SpaceCraft(string type) : type(type) {}

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
