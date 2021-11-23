#ifndef SPACECRAFTFACTORY_H
#define SPACECRAFTFACTORY_H
#include "SpaceCraft.h"


/**
 * @class SpaceCraftCreator "SpaceCraftCreator.h"
 *  @brief A class which is an interface for the concreteCreators in the Factory DP
 **/

class SpaceCraftCreator {
    public:
    /**
     * @brief Pure virtual function which will be used to create new space crafts
     * @return SpaceCraft*
    */
        virtual SpaceCraft *produceSpaceCraft() = 0;
};

#endif