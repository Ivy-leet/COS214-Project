#ifndef CREWDRAGONFACTORY_H
#define CREWDRAGONFACTORY_H
#include "SpaceCraftCreator.h"
#include "CrewDragon.h"

/**
 * @class CrewDragonCreator "CrewDragonCreator.h"
 * @brief Factory concrete creator for the space crafts
*/

class CrewDragonCreator : public SpaceCraftCreator {
    public:
        /**
         * @brief Creates new CrewDragon object
         * @return SpaceCraft*
        */
        SpaceCraft *produceSpaceCraft() override;
};


#endif