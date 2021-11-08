#ifndef FALCONNINECREATOR_H
#define FALCONNINECREATOR_H
#include "RocketCreator.h"
#include "FalconNine.h"

class FalconNineCreator : public RocketCreator {
public:
    Rocket *produceRocket() override;
};

#endif