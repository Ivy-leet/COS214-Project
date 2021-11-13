#include "SpaceShuttleBuilder.h"
#include "SpaceX.h"


int main(int argc, char **argv) {
    SpaceShuttleBuilder *builder = new SpaceShuttleBuilder;
    SpaceX *director = new SpaceX(builder);
    director->construct(0,0);
    SpaceShuttle *sp = builder->getShuttle();
    sp->shuttleInfo();

    sp->getSpaceCraft()->setNumCrew(3);
    sp->shuttleInfo();

    delete director;
    delete builder;
    delete sp;

}


