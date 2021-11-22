#include "SpaceShuttleBuilder.h"
#include "SpaceX.h"
#include "WinningConfig.h"
#include "WinningShuttle.h"
#include "Controller.h"
#include "Command.h"
#include "LaunchCommand.h"
#include "HaltCommand.h"
#include "Starlink.h"

int Starlink::StarLinkIDInc=0;

int menu() {
    int option;
    cout<<"[0] Create new Space Shuttle\n";
    cout<<"[1] Exit\n";
    cout<<">> ";
    cin>>option;

    return option;
}


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

void simulation(WinningConfig& config, SpaceX* spaceX, SpaceShuttleBuilder* b, int numOfCrew, int weightOfCargo, int numOfStarlinks) {
    int type[2]={0,1};

    if (numOfStarlinks!=-1) {
        if (numOfStarlinks>90) spaceX->construct(1, numOfCrew, numOfStarlinks);
        else spaceX->construct(0,numOfCrew, numOfStarlinks);
        return;
    }

    for (int i=0; i<2; i++) {
        spaceX->construct(i, numOfCrew, numOfStarlinks);
        SpaceShuttle* sp=b->getShuttle();

        if (numOfStarlinks==-1) {
            sp->getSpaceCraft()->setCargoWeight(weightOfCargo);
            sp->getSpaceCraft()->setNumCrew(numOfCrew);
        }
        sp->shuttleInfo();
        config.storeWinningShuttle(b->createMemento(config.retrieveWinningShuttle()));
    }
}


int main(int argc, char **argv) {
    cout<<"\033[37m"<<"WELCOME TO SPACEX!!\n\n";

    int option=menu();

    SpaceShuttleBuilder *builder = new SpaceShuttleBuilder;;
    SpaceX *director = new SpaceX(builder);
    Command* launch;
    Command* halt;

    while (option==0) {
        int typeOfTrip=-1;

    
        cout<<"\n[0] Cargo and/or crew\n";
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
    
        // builder = new SpaceShuttleBuilder;
        WinningConfig winner;
        
        // director = new SpaceX(builder);

        simulation(winner, director, builder, numOfCrew, weightOfCargo, numOfStarlinks);
        
        // builder->setMemento(winner.retrieveWinningShuttle());
        SpaceShuttle* sp=builder->getShuttle();
        cout<<"-----------\tSHUTTLE TO BE LAUNCHED\t--------------\n";
        sp->shuttleInfo();
        
        cout<<"-----------\tLaunch\t--------------\n";
        launch = new LaunchCommand(sp->getRocket());
        halt = new HaltCommand(sp->getRocket());
        Controller controller(launch, halt);
        controller.launch();

        builder->rocketReuse(sp->getRocket());
        
        cout<<endl;
        
        delete winner.retrieveWinningShuttle();
        option=menu();

        delete sp->getSpaceCraft();
        delete halt;
    delete launch;

    }
    

    

    

    
    delete director;
    delete builder;
    

}


