#include "Rocket.h"
#include <iostream>

using namespace std;

Rocket::Rocket()
{
 state = new Stage1("Rocket class");
}

void Rocket::fire()
{
  state->fire();
}

void Rocket::dock()
{
  state->dock();
}

void Rocket::detach()
{
  state = state->detach();
}

State* Rocket::getState()
{
  return state;
}
