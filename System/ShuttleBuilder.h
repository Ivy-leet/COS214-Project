#ifndef SHUTTLEBUILDER_H
#define SHUTTLEBUILDER_H
#include "SpaceShuttle.h"

using namespace std;


/**
 * @class ShuttleBuilder "ShuttleBuilder.h"
 * @brief Builder responsible for building the space shuttle
*/

class ShuttleBuilder {
    public:
        
        virtual ~ShuttleBuilder() {}

        /**
        * @brief Builds a specific rocket for the SpaceShuttle based on the parameter
        * @param type - integer (integer (0=FalconNine and 1=FalconHeavy)
        * @return void
        */
        virtual void buildRocket(int) = 0;

        /**
        * @brief Builds a specific number of stalinks
        * @param hasSpaceCraft True if there is a space craft
        * @param type (0=CrewDragon and 1=Dragon)
        * @return void
        */
        virtual void buildSpaceCraft(bool, int) = 0;

        /**
         * @brief Returns pointer to space shuttle object
         * @param hasStarlinks True if there are starlinks
         * @param numOfStarlinks Number of Starlinks
         * @param gCrew Pointer of ground crew
         * @return void
        */
        virtual void buildStarlinks(bool, int, Handler*) = 0;
};

#endif