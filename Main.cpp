#include "SpaceShuttleBuilder.h"
#include "SpaceX.h"
#include "WinningConfig.h"
#include "WinningShuttle.h"

int validateCrew() {
    int numOfCrew=-1;

    cout<<"Enter the number of crew members (0 if none): ";
    cin>>numOfCrew;

    if (numOfCrew>7)
    {
        cout<<"Maximum number of crew members is 7. Please re-enter the number of crew members.\n";
        validateCrew();
    }
    else 
    return numOfCrew;

}

int validateCargo() {
    int weightOfCargo=-1;

    cout<<"Enter the weight of cargo (0 if none): ";
    cin>>weightOfCargo;

    if (weightOfCargo>6000) {
        cout<<"Maximum weight of cargo is 6000 kg. Please re-enter the weight of cargo.\n";
        validateCargo();
    }
    else 
    return weightOfCargo;
}

int validateStarlinks() {
    int numOfStarlinks=-1;

    cout<<"Enter the number of starlinks: ";
    cin>>numOfStarlinks;

    if (numOfStarlinks>180) {
        cout<<"Maximum number of starinks is 180. Please re-enter the number of starlinks.\n";
        validateCargo();
    }

}

SpaceShuttle* simulation(WinningConfig& config, SpaceX* spaceX, SpaceShuttleBuilder* b, int numOfCrew, int weightOfCargo, int numOfStarlinks) {
    int type[2]={0,1};

    for (int i=0; i<2; i++) {
        spaceX->construct(i, numOfCrew, numOfStarlinks);
        SpaceShuttle* sp=b->getShuttle();

        if (numOfStarlinks==-1) {
            sp->getSpaceCraft()->setCargoWeight(weightOfCargo);
            sp->getSpaceCraft()->setNumCrew(numOfCrew);
        }
        sp->shuttleInfo();
        config.storeWinningShuttle(b->createMemento(config.retrieveWinningShuttle()));
        // WinningShuttle* ws=config.retrieveWinningShuttle();

        // b->setMemento(ws);
    }
}


int main(int argc, char **argv) {
    cout<<"\033[37m"<<"WELCOME TO SPACEX!!\n";

    int typeOfTrip=-1;

    
    cout<<"[0] Cargo and/or crew\n";
    cout<<"[1] Starlinks\n";
    cout<<"Please enter the type of trip: ";
    cin>>typeOfTrip;
    cout<<endl;

    int numOfCrew=-1;
    int weightOfCargo=-1;
    int numOfStarlinks=-1;

    if (typeOfTrip==0) {
        numOfCrew=validateCrew();
        weightOfCargo=validateCargo();
    }
    else {
        numOfStarlinks=validateStarlinks();
    }
    cout<<endl;
    
    SpaceShuttleBuilder *builder = new SpaceShuttleBuilder;
    WinningConfig winner;
    
    SpaceX *director = new SpaceX(builder);

    simulation(winner, director, builder, numOfCrew, weightOfCargo, numOfStarlinks);
    // director->construct(0, numOfCrew, numOfStarlinks);
    // SpaceShuttle *sp = builder->getShuttle();

    // if (typeOfTrip==0) {
    //     sp->getSpaceCraft()->setCargoWeight(weightOfCargo);
    //     sp->getSpaceCraft()->setNumCrew(numOfCrew);
    // }
    builder->setMemento(winner.retrieveWinningShuttle());
    SpaceShuttle* sp=builder->getShuttle();
    sp->shuttleInfo();

    // sp->getSpaceCraft()->setNumCrew(3);
    // sp->shuttleInfo();

    delete director;
    delete builder;
    delete sp;

}


