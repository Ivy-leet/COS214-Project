#ifndef SPACEX_H
#define SPACEX_H
#include "ShuttleBuilder.h"
#include "SpaceCraftCreator.h"
#include "WinningShuttle.h"


/**
 * @class SpaceX "SpaceX.h"
 * @brief A class which instructs a builder to create a shuttle. (Director participant in the Builder DP
 */


class SpaceX {
    private:
        
        ShuttleBuilder *shuttleBuilder;

    public:
        /**
        * Constructor
        * @param sb - ShuttleBuilder pointer
        * @brief Assigns a builder to SpaceX
        */
        SpaceX(ShuttleBuilder *);

        /**
        * @param rocketType - (specifies which rocket to make)
        * @param craftType - (specifies which spacecraft to make)
        * @param gCrew Pointer to ground crew
        * @brief Method is used to build the shuttle using our assigned builder
        * @return void
        */
        void construct(int rocketType, int craftType, int, Handler*);
        
};

#endif