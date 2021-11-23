#ifndef STAGE1_H
#define STAGE1_H

#include <iostream>
#include <string>
#include "State.h"
#include "Stage2.h"
using namespace std;


/**
 * @class Stage1 "Stage1.h"
 * @brief A class which implements the behaviour of the Engine rockets. This class is the ConcreteState participant in the State DP
 */

class Stage1: public State
{
  private:
  
 /**
 * @brief Returns a new Stage 2 object
 * @return void
 */
    State* changeState();
    
  public:
  Stage1(string msg);
  
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
