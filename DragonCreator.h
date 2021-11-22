#ifndef DRAGONFACTORY_H
#define DRAGONFACTORY_H
#include "SpaceCraftCreator.h"
#include "Dragon.h"

/**
 * @class DragonCreator "DragonCreator.h"
 * @brief Factory concrete creator for the space crafts
*/

class DragonCreator : public SpaceCraftCreator {
    public:
        /**
         * @brief Creates new Dragon object
         * @return SpaceCraft*
        */
        SpaceCraft *produceSpaceCraft() override;
};

#endif