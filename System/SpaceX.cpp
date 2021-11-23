#include "SpaceX.h"


SpaceX::SpaceX(ShuttleBuilder *sb) {
    shuttleBuilder = sb;
}

void SpaceX::construct(int rocketType, int craftType, int numOfStarlinks, Handler* gCrew) {
    shuttleBuilder->buildRocket(rocketType);
    shuttleBuilder->buildSpaceCraft(numOfStarlinks==-1, craftType==0);
    shuttleBuilder->buildStarlinks(numOfStarlinks!=-1, numOfStarlinks, gCrew);
}
