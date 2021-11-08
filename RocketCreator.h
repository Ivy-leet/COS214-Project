#ifndef ROCKETFACTORY_H
#define ROCKETFACTORY_H
#include "Rocket.h"

class RocketCreator {
    public:
        virtual Rocket *produceRocket() = 0;
};

#endif