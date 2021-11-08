#include "Dragon.h"

Dragon::Dragon() : SpaceCraft("Dragon"){}

void Dragon::spaceCraftInfo() {
    cout << "SpaceCraft Type: " << type;
}

double Dragon::getCost() {
    return 0;
}
