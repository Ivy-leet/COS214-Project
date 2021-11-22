#ifndef SPACESHUTTLE_H
#define SPACESHUTTLE_H
#include "Rocket.h"
#include "SpaceCraft.h"
#include "Starlink.h"
#include <vector>
#include <queue>
#include <math.h>
#include <ctime>
#include "Subject.h"

/*!
* @class    SpaceShuttleBuilder "SpaceShuttleBuilder.h"
* @brief    SpaceShuttleBuilder is the concreteBuilder participant in the Builder DP. Responsible for the creation of the Space Shuttle and the testing of the rockets.
*/

class SpaceShuttle : public Subject{
    private:
        Rocket *rocket;
        SpaceCraft *spaceCraft;
        vector<Starlink*> starlinks;
        
    public:
        SpaceShuttle();
        ~SpaceShuttle();

        /**
        * @brief Function responsible for adding a rocket to a SpaceShuttle object
        * @param r Pointer to a Rocket object of type FalconNine or FalconHeavy
        * @return void
        */
        void addRocket(Rocket *);

        /**
        * @brief Function responsible for adding a spacecraft to a SpaceShuttle object
        * @param s Pointer to a SpaceCraft objecy of type CrewDragon or Dragon
        * @return void
        */
        void addSpaceCraft(SpaceCraft *);

        /**
         * @brief Creates a number of starlinks
         * @param num Number of starlinks to create
         * @return void
        */
        void addStarlinks(int);

        /**
         * @brief Returns the total weight of the space shuttle
         * @return double
        */
        double getTotalWeight() const;

        /**
         * @brief Returns the total cost of the space shuttle
         * @return double
        */
        double getTotalCost() const;

        /**
         * @brief Prints out information about the shuttle
         * @return void
        */
        void shuttleInfo();

        /**
         * @brief Returns the rocket pointer of the space shuttle object
         * @return Rocket*
        */
        Rocket *getRocket();

        /**
         * @brief Returns the space craft pointer of the space shuttle object
         * @return SpaceCraft*
        */
        SpaceCraft *getSpaceCraft();

        /**
         * @brief Returns the data structure which holds the starlink pointers
         * @return vector<Starlink*>
        */
        vector<Starlink*> getStarlinks();

        /**
         * @brief Makes copy of the current space shuttle object
         * @return SpaceShuttle*
        */
        SpaceShuttle* clone();

};

#endif
