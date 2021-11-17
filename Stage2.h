#ifndef STAGE2_H
#define STAGE2_H

#include <iostream>
#include <string>
#include "State.h"
using namespace std;

class Stage2: public State
{
  private:
    State* changeState();
  public:
    Stage2(string msg);
    void fire();
    void dock();
    State* detach();
};
#endif
