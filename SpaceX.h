#ifndef SPACEX_H
#define SPACEX_H
#include "ShuttleBuilder.h"
#include "SpaceCraftCreator.h"
#include "WinningShuttle.h"

/**
 * @author Ishe
 * @class SpaceX
 * @brief A class which instructs a builder to create a shuttle. (Director participant in the Builder DP
 */


class SpaceX {
    private:
        
        ShuttleBuilder *shuttleBuilder;

    public:
        SpaceX(ShuttleBuilder *);
        void construct(int rocketType, int craftType, int);
        
};

#endif