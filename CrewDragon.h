#ifndef DRAGONCREW_H
#define DRAGONCREW_H
#include "SpaceCraft.h"

class CrewDragon : public SpaceCraft {
    public:
        CrewDragon();

        /**
         * @brief Prints out information about space craft
         * @return void
        */
        void spaceCraftInfo() override;

        /**
         * @brief Returns cost of space craft
         * @return double
        */
        double getCost() override;
};

#endif
