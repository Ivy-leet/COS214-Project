#include "FalconNine.h"

FalconNine::FalconNine() : Rocket("FalconNine") {
    cores = 1;
    numMerlinEngines = 9;
    cost = 62000000;
    weight = 15000;
    payload = 30600;
}


void FalconNine::rocketInfo() {
    cout << "Rocket Type: " << type << endl;
    cout << "Cost: $" << cost << endl;
    cout << "Weight: " << weight << " kg\n";
    cout << "Payload: " << payload << " kg\n";
    cout << "Number of Cores: " << cores << endl;
    cout << "Number of Merlin Engines: " << numMerlinEngines << endl;
    cout << "Number of Vacuum Merlin Engines: " << vacuumME << endl;
}

void FalconNine::addFalconNine(Rocket*) {}

Rocket* FalconNine::removeFalconNine() {
    return nullptr;
}
