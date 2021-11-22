#ifndef FALCONNINE_H
#define FALCONNINE_H
#include "Rocket.h"

/**
 * @class FalconNine "FalconNine"
*/

class FalconNine : public Rocket {
    public:
        FalconNine();
        void rocketInfo() override;
        virtual void addFalconNine(Rocket*);
        virtual Rocket* removeFalconNine();
};

#endif