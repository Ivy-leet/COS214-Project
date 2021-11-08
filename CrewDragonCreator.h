#ifndef CREWDRAGONFACTORY_H
#define CREWDRAGONFACTORY_H
#include "SpaceCraftFCreator.h"
#include "CrewDragon.h"

class CrewDragonCreator : public SpaceCraftFCreator {
public:
    SpaceCraft *produceSpaceCraft() override;
};


#endif