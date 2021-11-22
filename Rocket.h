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
    
/**
 * @brief Simulates the launch of the SpaceShuttle
 *
 * The Template Method mission handles firing, detaching and docking of
 * the Stage 1 and Stage 2 Engines. This is done to ensure that the correct
 * procedure is followed. (Stage 2 will not fire before Stage 1 and either rocket
 * will not detach before it's fired)
 * @return void
 */
        void mission();
 
 /**
 * @brief Fires the Stage Rockets
 * @return void
 */
        virtual void fire();
    
  /**
 * @brief Detaches the Stage Rockets
 * @return State pointer
 */
        virtual void detach();
    
 /**
 * @brief Docks the Stage Rockets
 * @return void
 */
        virtual void dock();
    
/**
 * @brief Returns the current state of the Rocket Engines
 * @return State pointer
 */
        virtual State* getState();
    
 /**
 * @brief Sets the new state of the Rocket Engines
 * @param s - State*
 * @return void
 */
        virtual void setState(State*);
    
 /**
 * @brief Returns the cost of the Rocket
 * @return double
 */
        virtual double getCost();
    
 /**
 * @brief Displays information about the Rocket
 * @return void
 */
        virtual void rocketInfo() = 0;
    
 /**
 * @brief Returns the payload
 * @return double
 */
        double getPayload() const;
    
 /**
 * @brief Returns the weight
 * @return void
 */
        virtual double getWeight();
    
 /**
 * @brief Adds a FalconNine Rocket to the SpaceShuttle
 * @param r - Rocket*
 * @return void
 */
        virtual void addFalconNine(Rocket*) = 0;
    
 /**
 * @brief Removes a FalconNine Rocket to the SpaceShuttle
 * @return Rocket pointer
 */
        virtual Rocket* removeFalconNine() = 0;
    
 /**
 * @brief Returns the number of reuses
 * @return integer
 */
        int getNumReuses();
    
 /**
 * @brief Sets the number of reuses
 * @param int - n
 * @return void
 */
        void setNumReuses(int);
};

#endif
