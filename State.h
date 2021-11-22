#ifndef STATE_H
#define STATE_H

#include <iostream>
#include <string>
using namespace std;

/**
 * @class State "State.h"
 * @brief A class which specifies the states of the Engine rockets. This class is the State participant in the State DP
 */

class State
{
  private:
    std::string message;
  
  protected:
  
 /**
 * @brief Returns a new Stage 2 object
 * @return void
 */
    virtual State* changeState()=0;
  
  public:
    State(std::string msg);
  
 /**
 * @brief Fires the Stage Rockets
 * @return void
 */
    virtual void fire() =0;
  
 /**
 * @brief Docks the Stage Rockets
 * @return void
 */
    virtual void dock() =0;
  
 /**
 * @brief Detaches the Stage Rockets
 * @return State pointer
 */
    virtual State* detach() =0;
  
 /**
 * @brief Sets the message to be sent to the Observer
 * @param m - string
 * @return void
 */
    void setMessage(std::string);
  
 /**
 * @brief Appends the message for additional information
 * @param m - string
 * @return void
 */
    void addMessage(std::string);
  
 /**
 * @brief Returns the message
 * @return string message
 */
    std::string getMessage();
};
#endif
