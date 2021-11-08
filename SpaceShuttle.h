#ifndef SPACESHUTTLE_H
#define SPACESHUTTLE_H
#include "Rocket.h"
#include "SpaceCraft.h"

class SpaceShuttle {                    //  Product in Builder Pattern
    private:
        Rocket *rocket;
        SpaceCraft *spaceCraft;

    public:
        SpaceShuttle();
        void addRocket(Rocket *);
        void addSpaceCraft(SpaceCraft *);
        double getTotalWeight() const;
        double getTotalCost() const;
        Rocket *getRocket();
        SpaceCraft *getSpaceCraft();
};

#endif