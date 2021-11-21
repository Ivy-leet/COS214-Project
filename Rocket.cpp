#include "Rocket.h"

int Rocket::getNumReuses() {
    return this->num_reuses;
}

double Rocket::getCost() {
    return cost-(50000000*(1%num_reuses));
}

void Rocket::setNumReuses(int n) {
    this->num_reuses=n;
}

Rocket::Rocket(string type) : type(type), vacuumME(1), num_reuses(0)
{
    state = new Stage1("Rocket class");
}

Rocket::~Rocket()
{
    if(state != nullptr)
        delete state;
}

double Rocket::getPayload() const {
    return payload;
}

double Rocket::getWeight() {
    return weight;
}

void Rocket::mission()
{
    fire();
    std::cout << state->getMessage() << std::endl;
    detach();
    fire();
    std::cout << state->getMessage() << std::endl;
    dock();
    std::cout << state->getMessage() << std::endl;
    detach();
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
    if(state == nullptr)
        return;
    
    State* temp = state->detach();
    std::cout << state->getMessage() << std::endl;
    if(state != nullptr)
        delete state;
    state = temp;
}

State* Rocket::getState()
{
  return state;
}

void Rocket::setState(State* s) 
{
    state=s;
}
