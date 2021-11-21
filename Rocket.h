#ifndef ROCKET_H
#define ROCKET_H
#include <iostream>
#include <iomanip>

#include "State.h"
#include "Stage1.h"
#include "Stage2.h"

using namespace std;

class Rocket {
    protected:
        State* state;
        string type;
        double cost;
        double weight;
        double payload;
        int numMerlinEngines;
        int cores;
        int vacuumME;
        int num_reuses;

    public:
        Rocket(string);
        virtual ~Rocket();
        void mission();
        virtual void fire();
        virtual void detach();
        virtual void dock();
        virtual State* getState();
        virtual void setState(State*);
        virtual double getCost();
        virtual void rocketInfo() = 0;
        double getPayload() const;
        virtual double getWeight();
        virtual void addFalconNine(Rocket*) = 0;
        virtual Rocket* removeFalconNine() = 0;
        int getNumReuses();
        void setNumReuses(int);
        
};

#endif