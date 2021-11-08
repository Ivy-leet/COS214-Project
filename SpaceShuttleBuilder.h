#ifndef SPACESHUTTLEBUILDER_H
#define SPACESHUTTLEBUILDER_H
#include "ShuttleBuilder.h"


class SpaceShuttleBuilder : public ShuttleBuilder {                     // ConcreteBuilder
    private:
        SpaceShuttle *spaceShuttle;

    public:
        SpaceShuttleBuilder();
        void buildRocket(Rocket *) override;
        void buildShuttle(SpaceCraft *) override;
        SpaceShuttle *getShuttle() const;
};

#endif