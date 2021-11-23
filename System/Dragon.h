#ifndef DRAGON_H
#define DRAGON_H
#include "SpaceCraft.h"


/**
 * @class Dragon "Dragon.h"
 * @brief
*/

class Dragon : public SpaceCraft {
    public:
        Dragon();

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