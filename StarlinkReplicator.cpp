#include "StarlinkReplicator.h"
#include<iostream>

using namespace std;

Starlink* StarlinkReplicator::getClone(Starlink copyStarlink)
{
    return copyStarlink.clone();
}