#ifndef FALCONNINE_H
#define FALCONNINE_H
#include "Rocket.h"
#include <vector>

class FalconNine : public Rocket {

    public:
        FalconNine();
        double getCost() override;
        void spaceCraftInfo() override;
        virtual void addFalconNine(Rocket*);
        virtual Rocket* removeFalconNine();
};

#endif
 /*!
  * @return void
  */
