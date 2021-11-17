#include "Rocket.h"

int Rocket::getNumReuses() {
    return this->num_reuses;
}

double Rocket::getCost() {
    return cost;
}

void Rocket::setNumReuses(int n) {
    this->num_reuses=n;
}

Rocket::Rocket(string type) : type(type), vacuumME(1)
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
    std::cout << state->getMessage() << std::endl;
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
