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

    public:
        Rocket(string);
        virtual ~Rocket();
        virtual double getCost() = 0;
        virtual void spaceCraftInfo() = 0;
        double getPayload() const;
        double getCargoWeight() const;
};

#endif