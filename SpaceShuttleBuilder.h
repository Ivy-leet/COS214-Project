#ifndef SPACESHUTTLEBUILDER_H
#define SPACESHUTTLEBUILDER_H
#include "ShuttleBuilder.h"
#include "DragonCreator.h"
#include "CrewDragonCreator.h"
#include "FalconNine.h"
#include "FalconHeavy.h"

/*!
* @author Ishe
* @brief SpaceShuttleBuilder is the concreteBuilder participant in the Builder DP. Responsible for creating the SpaceShuttle.
*/
class SpaceShuttleBuilder : public ShuttleBuilder {
    private:
        SpaceShuttle *spaceShuttle;

    public:
        void buildRocket(int type) override;
        void buildSpaceCraft(int type) override;
        SpaceShuttle *getShuttle() const;
};

#endif