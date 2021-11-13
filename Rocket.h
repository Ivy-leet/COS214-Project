#ifndef ROCKET_H
#define ROCKET_H
#include <iostream>

using namespace std;

class Rocket {
    protected:
        string type;
        double cost;
        double weight;
        double payload;
        int numMerlinEngines;
        int cores;
        int VacuumME = 1;
        int num_reuses;

    public:
        Rocket(string);
        virtual ~Rocket();
        virtual void fire();
        virtual void detach();
        virtual void dock();
        virtual double getCost() = 0;
        virtual void spaceCraftInfo() = 0;
        double getPayload() const;
        double getCargoWeight() const;
        virtual void addFalconNine(Rocket*) = 0;
        virtual Rocket* removeFalconNine() = 0;
        int getNumReuses();
        void setNumReuses(int);
        
};

#endif