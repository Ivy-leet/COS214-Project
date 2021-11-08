#ifndef SPACECRAFT_H
#define SPACECRAFT_H
#include <iostream>

using namespace std;

class SpaceCraft {
    protected:
        string type;
        int numCrew;
        double cost;
        double payload;
        double cargoWeight;

    public:
        SpaceCraft(string);
        virtual ~SpaceCraft();
        virtual void spaceCraftInfo() = 0;
        void setCargoWeight(double);
        void setNumCrew(int);
        virtual double getCost() = 0;
        double getPayload() const;
        double getCargoWeight() const;
};


#endif