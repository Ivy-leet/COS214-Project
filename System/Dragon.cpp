#include "Dragon.h"


Dragon::Dragon() : SpaceCraft("Dragon") {}

void Dragon::spaceCraftInfo() {
    cout<<fixed;
    cout << "SpaceCraft Type: " << type << endl;
    cout << "Cost: $"<<setprecision(2) << this->getCost() << endl;
    cout << "Max Weight Load: " << payload << " kg\n";
    cout << "Current Weight Load: " << cargoWeight << " kg\n";
}

double Dragon::getCost() {
    return cargoWeight * 26670;
}