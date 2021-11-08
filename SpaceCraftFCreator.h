#ifndef SPACECRAFTFACTORY_H
#define SPACECRAFTFACTORY_H
#include "SpaceCraft.h"

class SpaceCraftFCreator {
    public:
        virtual SpaceCraft *produceSpaceCraft() = 0;
};

#endif