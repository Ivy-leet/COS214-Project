#ifndef SPACESHUTTLE_H
#define SPACESHUTTLE_H
#include "Rocket.h"
#include "SpaceCraft.h"
#include "Starlink.h"
#include <vector>
#include <queue>
#include <math.h>
#include <ctime>

class SpaceShuttle {                    //  Product in Builder Pattern
    private:
        Rocket *rocket;
        SpaceCraft *spaceCraft;
        vector<Starlink*> starlinks;
        queue<Rocket*> for_reuse;

        Rocket* testRocket(Rocket*);
        int binomialC(int n, int k);
        bool binomialTest(int x, int n, double p);

    public:
        SpaceShuttle();
        
        /**
         * Function responsible for adding a rocket to a SpaceShuttle object
         * @param i  can either be 0 (Falcon Nine), or 1 (Falcon Heavy)
         * **/
        void addRocket(int);
        void addSpaceCraft(SpaceCraft *);
        double getTotalWeight() const;
        double getTotalCost() const;
        Rocket *getRocket();
        SpaceCraft *getSpaceCraft();

        /**
         * Maximum number of reuses of a rocket is 10
         * If less, add to for_reuse queue.
         * If equal or more, delete (write-off)
         * 
         * @param r Rocket to be reused or written-off
         * **/
        void rocketReuse(Rocket*);

        

};

#endif