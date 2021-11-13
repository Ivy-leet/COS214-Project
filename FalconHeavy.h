#ifndef FALCONHEAVY_H
#define FALCONHEAVY_H
#include "Rocket.h"
#include <list>

class FalconHeavy : public Rocket {
    private:
        list<Rocket*>falcon_nines;

    public:
        FalconHeavy();
        void detach();
        double getCost() override;
        void spaceCraftInfo() override;
        virtual void fire();
        virtual void detach();
        virtual void dock();
        virtual void addFalconNine(Rocket*);
        virtual Rocket* removeFalconNine();
};

#endif