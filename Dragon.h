#ifndef DRAGON_H
#define DRAGON_H
#include "SpaceCraft.h"

class Dragon : public SpaceCraft {
    public:
        Dragon();
        void spaceCraftInfo() override;
        double getCost() override;
};

#endif