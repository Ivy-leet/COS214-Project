#ifndef FALCONHEAVYCREATOR_H
#define FALCONHEAVYCREATOR_H
#include "RocketCreator.h"
#include "FalconHeavy.h"

class FalconHeavyCreator : public RocketCreator {
public:
    Rocket *produceRocket() override;
};

#endif