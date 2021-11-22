#ifndef FALCONNINE_H
#define FALCONNINE_H
#include "Rocket.h"

/**
 * @class FalconNine "FalconNine.h"
 * @brief A class which implements the Rocket's specification. This class is the ConcreteClass participant in the Template Method DP
 */

class FalconNine : public Rocket {
    public:
        FalconNine();
    
 /**
 * @brief Displays information about the Rocket
 * @return void
 */
        void rocketInfo() override;
    
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
