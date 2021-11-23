#ifndef SPACECRAFT_H
#define SPACECRAFT_H
#include <iostream>
#include <iomanip>


using namespace std;

/**
 * @class SpaceCraft "SpaceCraft.h"
 * @brief A class which acts a an interface for the ConcreteProducts. This class is the Product participant in the Factory Method DP
 */


class SpaceCraft {
    protected:
        string type;
        int numCrew;
        double cargoWeight;
        double payload;

    public:
        SpaceCraft(string);
        virtual ~SpaceCraft();

        /**
         * @brief Prints out information about space craft
         * @return void
        */
        virtual void spaceCraftInfo() = 0;

        /**
         * @brief Sets the cargo weight
         * @param 
         * @return void
        */
        void setCargoWeight(double);

        /**
         * @brief Returns cost of space craft
         * @return double
        */
        virtual double getCost() = 0;

        /**
         * @brief Returns the number of crew members
         * @return int
        */
        virtual int getNumCrew();

        /**
         * @brief Sets the number of crew members
         * @param num Number of crew members
         * @return void
        */

        virtual void setNumCrew(int);

        /**
         * @brief Returns the payload
         * @return double
        */
        double getPayload() const;

        /**
         * @brief Returns the cargo weight
         * @return double
        */
        double getCargoWeight() const;

        /**
         * @brief Function called when returning a space craft
         * @return void
        */
        virtual void ret();
};


#endif
