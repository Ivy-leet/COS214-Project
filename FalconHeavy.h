#ifndef FALCONHEAVY_H
#define FALCONHEAVY_H
#include "FalconNine.h"

class FalconHeavy : public Rocket {
    private:
        FalconNine *falcon_nines[3];

    public:
        FalconHeavy(FalconNine *);
        void detach(FalconNine *);
        double getCost() override;
        void spaceCraftInfo() override;
};

#endif