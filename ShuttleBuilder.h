#ifndef SHUTTLEBUILDER_H
#define SHUTTLEBUILDER_H
#include "SpaceShuttle.h"

using namespace std;

class ShuttleBuilder {
    public:
        virtual ~ShuttleBuilder() {}
        virtual void buildRocket(int) = 0;
        virtual void buildSpaceCraft(int) = 0;
};

#endif