#include "FalconHeavy.h"

FalconHeavy::FalconHeavy() : Rocket("FalconHeavy") {
    cores = 3;
    numMerlinEngines = 27;
    cost = 150000000;
    payload = 80000;                         // You decide
    weight = 20000;
}

FalconHeavy::~FalconHeavy() {
    list<Rocket*>::iterator it;

    for (it=falcon_nines.begin();it!=falcon_nines.end();it++)
        *it=nullptr;
}

void FalconHeavy::rocketInfo() {
    cout<<fixed;
    cout << "Rocket Type: " << type << endl;
    cout << "Number of reuses: " << num_reuses <<endl;
    cout << "Cost: $" <<setprecision(2)<< getCost() << endl;
    cout << "Weight: " << weight << " kg\n";
    cout << "Payload: " << payload << " kg\n";
    cout << "Number of Cores: " << cores << endl;
    cout << "Number of Merlin Engines: " << numMerlinEngines << endl;
    cout << "Number of Vacuum Merlin Engines: " << vacuumME << endl;
    cout << "Number of Falcon Nines: " << falcon_nines.size() << endl;
}

void FalconHeavy::addFalconNine(Rocket* r) {
    if (falcon_nines.size()>=3) return;

    falcon_nines.push_back(r);
    cost += r->getCost();
    weight += r->getWeight();
}

Rocket* FalconHeavy::removeFalconNine() {
    Rocket* r=falcon_nines.front();
    falcon_nines.pop_front();

    if (falcon_nines.size()==0) 
        falcon_nines.clear();

    // cost -= r->getCost();
    // weight -= r->getWeight();
    return r;
}

void FalconHeavy::fire() {
    Rocket::fire();
}

void FalconHeavy::detach() {
    Rocket::detach();
}

void FalconHeavy::dock() {
    Rocket::dock();
}
