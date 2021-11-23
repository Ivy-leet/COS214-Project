#ifndef FALCONHEAVY_H
#define FALCONHEAVY_H
#include "Rocket.h"
#include <list>
#include <vector>

class Rocket;

/**
 * @class FalconHeavy "FalconHeavy.h"
 * @brief A class which implements the Rocket's specification. This class is the ConcreteClass participant in the Template Method DP
 */

class FalconHeavy : public Rocket {
    private:
        list<Rocket*>falcon_nines;

    public:
        FalconHeavy();
        ~FalconHeavy();
        void rocketInfo() override;
    
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
 * @brief Adds a FalconNine Rocket
 * @param r - Rocket*
 * @return void
 */
        virtual void addFalconNine(Rocket*);
    
 /**
 * @brief Removes a FalconNine Rocket
 * @return Rocket pointer
 */
        virtual Rocket* removeFalconNine();
};

#endif
