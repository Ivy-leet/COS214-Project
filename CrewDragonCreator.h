#ifndef CREWDRAGONFACTORY_H
#define CREWDRAGONFACTORY_H
#include "SpaceCraftCreator.h"
#include "CrewDragon.h"

class CrewDragonCreator : public SpaceCraftCreator {
    public:
        SpaceCraft *produceSpaceCraft() override;
};


#endif