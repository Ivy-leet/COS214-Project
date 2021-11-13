#include "Rocket.h"

int Rocket::getNumReuses() {
    return this->num_reuses;
}

void Rocket::setNumReuses(int n) {
    this->num_reuses=n;
}

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
