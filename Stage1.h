#ifndef STAGE1_H
#define STAGE1_H

#include <iostream>
#include <string>
#include "State.h"
#include "Stage2.h"
using namespace std;

class Stage1: public State
{
  private:
    State* changeState();
  public:
    Stage1(string msg);
    void fire();
    void dock();
    State* detach();
};
#endif
