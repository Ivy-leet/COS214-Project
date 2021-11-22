#ifndef STAGE2_H
#define STAGE2_H

#include <iostream>
#include <string>
#include "State.h"
using namespace std;

/**
 * @class Stage2 "Stage2.h"
 * @brief A class which implements the behaviour of the Engine rockets. This class is the ConcreteState participant in the State DP
 */

class Stage2: public State
{
  private:
  
 /**
 * @brief Returns a nullptr object
 * @return void
 */
    State* changeState();
    
  public:
    Stage2(string msg);
    
 /**
 * @brief Fires the Stage Rockets
 * @return void
 */
    void fire();
    
 /**
 * @brief Docks the Stage Rockets
 * @return void
 */
    void dock();
    
 /**
 * @brief Detaches the Stage Rockets
 * @return State pointer
 */
    State* detach();
};
#endif
