#ifndef SPACESHUTTLEBUILDER_H
#define SPACESHUTTLEBUILDER_H
#include <stack>
#include <ctime>
#include <math.h>
#include "ShuttleBuilder.h"
#include "DragonCreator.h"
#include "CrewDragonCreator.h"
#include "FalconNine.h"
#include "FalconHeavy.h"
#include "WinningShuttle.h"

/**
 * @class SpaceShuttleBuilder "SpaceShuttleBuilder.h"
 * @brief Concrete Builder responsible for building the space shuttle
*/


class SpaceShuttleBuilder : public ShuttleBuilder {
    private:
        SpaceShuttle *spaceShuttle;
        stack<Rocket*> for_reuse;

        bool heavyCheck();

        /**
         * @brief  Tests rockets
         * Maximum number of reuses of a rocket is 10
         * If less, add to for_reuse queue.
         * If equal or more, delete (write-off)
         * @param  r Pointer to the rocket being tested
         * @return Rocket* 
        */
        Rocket* testRocket(Rocket* r);

        /**
         * @brief Calculates the combinatorics of two values (nCk)
         * @param n
         * @param k
         * @return int
        */
        int binomialC(int n, int k);

        /**
         * @brief Performs a binomial test
         * @param x Number of tests
         * @param n Number of passed test
         * @param p Probability of the latest passed test
        */
        bool binomialTest(int x, int n, double p);

    public:
        SpaceShuttleBuilder();
        virtual ~SpaceShuttleBuilder();

        /**
        * @brief Builds a specific rocket for the SpaceShuttle based on the parameter
        * @param type - integer (integer (0=FalconNine and 1=FalconHeavy)
        * @return void
        */
        void buildRocket(int type) override;

        /**
        * @brief Builds a specific spaceCraft for the SpaceShuttle based on the parameter
        * @param hasSpaceCraft  - bool  
        * @param type - integer (0=CrewDragon and 1=Dragon)
        * @return void
        */
        void buildSpaceCraft(bool hasSpaceCraft, int type) override;

        /**
        * @brief Builds a specific number of stalinks
        * @param numOfStarlinks - bool
        * @param type - integer (0=CrewDragon and 1=Dragon)
        * @return void
        */
        void buildStarlinks(bool hasStarlinks, int numOfStarlinks, Handler*) override;

        /**
         * @brief Returns pointer to space shuttle object
         * @return SpaceShuttle*
        */
        SpaceShuttle *getShuttle() const;

        /**
         * @brief Determines which rockets are fit for reuse
         * @param r The rocket to possibly be reused
         * @return void
        */
        void rocketReuse(Rocket* r);

        /**
         * @brief Create memento which will have a pointer to the cheapest space shuttle
         * @param w Current memento holding the cheapest space shuttle
         * @return WinningShuttle* New memento which has the latest cheapest space shuttle
        */
        WinningShuttle* createMemento(WinningShuttle* w);


        /**
         * @brief Restores the space shuttle pointer to the cheapest space shuttle
         * @param w Current memento holding the cheapest space shuttle
         * @return void
        */
        void setMemento(WinningShuttle* w);
};

#endif