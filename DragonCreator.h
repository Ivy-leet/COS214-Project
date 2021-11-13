#ifndef DRAGONFACTORY_H
#define DRAGONFACTORY_H
#include "SpaceCraftCreator.h"
#include "Dragon.h"

class DragonCreator : public SpaceCraftCreator {
    public:
        SpaceCraft *produceSpaceCraft() override;
};

#endif