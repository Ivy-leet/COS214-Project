#ifndef ROCKET_H
#define ROCKET_H
#include <iostream>
#include <iomanip>

using namespace std;

class Rocket {
    protected:
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
        virtual void fire();
        virtual void detach();
        virtual void dock();
        double getCost();
        virtual void rocketInfo() = 0;
        double getPayload() const;
        virtual double getWeight();
        virtual void addFalconNine(Rocket*) = 0;
        virtual Rocket* removeFalconNine() = 0;
        int getNumReuses();
        void setNumReuses(int);
        
};

#endif