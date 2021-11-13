#include "CrewDragon.h"

CrewDragon::CrewDragon() : SpaceCraft("Crew Dragon"){
    numCrew = 0;
    payload = 0;
    cargoWeight = 0.0;
}

void CrewDragon::spaceCraftInfo() {
    cout << "SpaceCraft Type: " << type << endl;
    cout << "Number of Crew Members: " << numCrew << endl;
    cout << "Cost: $" << this->getCost() << endl;
    cout << "Max Weight Load: " << payload << " kg\n";
    cout << "Current Weight Load: " << cargoWeight << " kg\n";
}

double CrewDragon::getCost() {
    return numCrew * 55000000 + cargoWeight * 26670;
}

void CrewDragon::setNumCrew(int num) {
    numCrew = num;
}
