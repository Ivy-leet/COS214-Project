#include "CrewDragonCreator.h"
#include "DragonCreator.h"
#include "FalconNineCreator.h"

int main(int argc, char **argv) {
    SpaceCraftFCreator *spaceCraftFactory[2];
    spaceCraftFactory[0] = new CrewDragonCreator;
    spaceCraftFactory[1] = new DragonCreator;

    RocketCreator *fn = new FalconNineCreator;

    Rocket *r = fn->produceRocket();

}


