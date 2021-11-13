#ifndef DRAGONCREW_H
#define DRAGONCREW_H
#include "SpaceCraft.h"

class CrewDragon : public SpaceCraft {
    public:
        CrewDragon();
        void spaceCraftInfo() override;
        double getCost() override;
        void setNumCrew(int i) override;
};

#endif
