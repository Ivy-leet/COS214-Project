#ifndef FALCONHEAVY_H
#define FALCONHEAVY_H
#include "Rocket.h"
#include <list>

/**
 * @class FalconHeavy "FalconHeavy.h"
 * @brief The composite participant in the Composite design pattern. Holds pointers to FalconNine objects
*/

class Rocket;

class FalconHeavy : public Rocket {
    private:
        list<Rocket*>falcon_nines;

    public:
        FalconHeavy();
        ~FalconHeavy();
        void rocketInfo() override;
        virtual void fire();
        virtual void detach();
        virtual void dock();
        virtual void addFalconNine(Rocket*);
        virtual Rocket* removeFalconNine();
};

#endif