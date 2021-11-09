#ifndef ROCKET_H
#define ROCKET_H
#include "State.h"
#include "Stage1.h"
#include <iostream>

using namespace std;
//PURELY FOR TESTING STATE DP
class Rocket
{
private:
  State* state;
public:
  Rocket();
  void fire();
  void dock();
  void detach();
  State* getState();
};
#endif
