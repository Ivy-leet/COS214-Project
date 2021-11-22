#ifndef SPACECRAFTFACTORY_H
#define SPACECRAFTFACTORY_H
#include "SpaceCraft.h"

/**
 * @class SpaceCraftCreator "SpaceCraftCreator.h"
 *  @brief A class which is an interface for the concreteCreators in the Factory DP
 **/

class SpaceCraftCreator {
    public:
        virtual SpaceCraft *produceSpaceCraft() = 0;
};

#endif