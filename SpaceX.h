#ifndef SPACEX_H
#define SPACEX_H
#include "ShuttleBuilder.h"
#include "SpaceCraftFCreator.h"
#include "RocketCreator.h"

class SpaceX {
    private:
        ShuttleBuilder *shuttleBuilder;

    public:
        SpaceX(ShuttleBuilder *);
        void construct(RocketCreator *, SpaceCraftFCreator *);
};


#endif