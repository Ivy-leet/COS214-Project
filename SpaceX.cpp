/*!
* @author Ishe
 * SpaceX is the director participant in the Builder DP. Manages the creation of the SpaceShuttle
*/

#include "SpaceX.h"


/**
* Constructor
* @param sb - ShuttleBuilder pointer
* @brief Assigns a builder to SpaceX
*/
SpaceX::SpaceX(ShuttleBuilder *sb) {
    shuttleBuilder = sb;
}

/**
* @param rocketType - (specifies which rocket to make)
 * @param craftType - (specifies which spacecraft to make)
* @brief Method is used to build the shuttle using our assigned builder
* @return void
*/
void SpaceX::construct(int rocketType, int craftType, int numOfStarlinks) {
    shuttleBuilder->buildRocket(rocketType);
    shuttleBuilder->buildSpaceCraft(numOfStarlinks==-1, craftType==0);
    shuttleBuilder->buildStarlinks(numOfStarlinks!=-1, numOfStarlinks);
}
