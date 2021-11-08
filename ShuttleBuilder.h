#ifndef SHUTTLEBUILDER_H
#define SHUTTLEBUILDER_H
#include "SpaceShuttle.h"

using namespace std;

class ShuttleBuilder {              //  Builder
    public:
        virtual ~ShuttleBuilder() {}
        virtual void buildRocket(Rocket *) = 0;
        virtual void buildShuttle(SpaceCraft *) = 0;
};

#endif