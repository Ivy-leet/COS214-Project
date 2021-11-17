#ifndef SPACESHUTTLEBUILDER_H
#define SPACESHUTTLEBUILDER_H
#include <queue>
#include <ctime>
#include <math.h>
#include "ShuttleBuilder.h"
#include "DragonCreator.h"
#include "CrewDragonCreator.h"
#include "FalconNine.h"
#include "FalconHeavy.h"
#include "WinningShuttle.h"

/*!
* @author Ishe
* @brief SpaceShuttleBuilder is the concreteBuilder participant in the Builder DP. Responsible for creating the SpaceShuttle.
*/
class SpaceShuttleBuilder : public ShuttleBuilder {
    private:
        SpaceShuttle *spaceShuttle;
        queue<Rocket*> for_reuse;

        bool heavyCheck();
        Rocket* testRocket(Rocket*);
        int binomialC(int n, int k);
        bool binomialTest(int x, int n, double p);

    public:
        SpaceShuttleBuilder();
        virtual ~SpaceShuttleBuilder();
        void buildRocket(int type) override;
        void buildSpaceCraft(bool, int type) override;
        void buildStarlinks(bool, int) override;
        SpaceShuttle *getShuttle() const;
        void rocketReuse(Rocket*);

        WinningShuttle* createMemento();
        void setMemento(WinningShuttle* );
};

#endif