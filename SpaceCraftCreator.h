#ifndef SPACECRAFTFACTORY_H
#define SPACECRAFTFACTORY_H
#include "SpaceCraft.h"

/**
 * @class responsible for adding a rocket to a SpaceShuttle object
 *  @brief A class which is an interface for the concreteCreators in the Factory DP
 **/

class SpaceCraftCreator {
    public:
        virtual SpaceCraft *produceSpaceCraft() = 0;
};

#endif