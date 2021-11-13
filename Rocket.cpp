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

Rocket::Rocket(string type) : type(type), vacuumME(1) {}

Rocket::~Rocket() {}

double Rocket::getPayload() const {
    return payload;
}

double Rocket::getWeight() {
    return weight;
}

void Rocket::fire() {

}

void Rocket::detach() {

}

void Rocket::dock() {

}

