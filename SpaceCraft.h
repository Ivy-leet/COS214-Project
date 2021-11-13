#ifndef SPACECRAFT_H
#define SPACECRAFT_H
#include <iostream>

using namespace std;

/**
 * @author Ishe
 * @class SpaceCraft
 * @brief A class which acts a an interface for the ConcreteProducts. This class is the Product participant in the Factory Method DP
 */


class SpaceCraft {
    protected:
        string type;
        int numCrew;
        double payload;
        double cargoWeight;

    public:
        SpaceCraft(string);
        virtual ~SpaceCraft();
        virtual void spaceCraftInfo() = 0;
        void setCargoWeight(double);
        virtual void setNumCrew(int) = 0;
        virtual double getCost() = 0;
        double getPayload() const;
        double getCargoWeight() const;
};


#endif