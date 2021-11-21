#include "CrewDragon.h"

CrewDragon::CrewDragon() : SpaceCraft("Crew Dragon") {}

void CrewDragon::spaceCraftInfo() {
    cout << fixed;
    cout << "SpaceCraft Type: " << type << endl;
    cout << "Number of Crew Members: " << numCrew << endl;
    cout << "Cost: $" << setprecision(2) << this->getCost() << endl;
    cout << "Max Weight Load: " << payload << " kg\n";
    cout << "Current Weight Load: " << cargoWeight << " kg\n";
}

double CrewDragon::getCost() {
    return numCrew * 55000000 + cargoWeight * 26670;
}
