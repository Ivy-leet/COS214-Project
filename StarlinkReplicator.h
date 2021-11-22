#include <iostream>
#include "Starlink.h"

class StarlinkReplicator : public Starlink //basically acts as a cloning factory. Used to create clones
{
private:
    /* data */
public:
    Starlink* getClone(Starlink sampleSatellite); //calls the clone() method of sampleSatellite
};

