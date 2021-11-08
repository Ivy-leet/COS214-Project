#ifndef DRAGONFACTORY_H
#define DRAGONFACTORY_H
#include "SpaceCraftFCreator.h"
#include "Dragon.h"

class DragonCreator : public SpaceCraftFCreator {
public:
    SpaceCraft *produceSpaceCraft() override;

};

#endif