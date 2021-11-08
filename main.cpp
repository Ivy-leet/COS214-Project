#include "Rocket.h"
#include "Command.h"
#include "HaltCommand.h"
#include "LaunchCommand.h"
#include "Controller.h"
#include <iostream>

using namespace std;
//THIS IS JUST FOR TESTING PURPOSES AND WILL BE REMOVED //
// WHEN THE NECESSARY CLASSES HAVE BEEN CREATED //
int main()
{
    cout<<"!!!COMMAND DP TESTER MAIN(CLIENT)!!!"<<endl;
    Rocket* rocket = new Rocket();
    Command* halt = new HaltCommand(rocket);
    Command* launch = new LaunchCommand(rocket);
    Controller* controller = new Controller(launch,halt);

    controller->halt();
    controller->launch();

}
