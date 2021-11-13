#ifndef FALCONNINE_H
#define FALCONNINE_H
#include "Rocket.h"
#include "Starlink.h"
#include <vector>

class FalconNine : public Rocket {
    private:
        Starlink *starlinks;

    public:
        FalconNine();
        void addStarLinks(int num);
        FalconNine *clone();
        double getCost() override;
        void spaceCraftInfo() override;
};

#endif
 /*!
  * @return void
  */
