#include "SpaceShuttleBuilder.h"

SpaceShuttleBuilder::SpaceShuttleBuilder() {
    spaceShuttle = new SpaceShuttle;
}

SpaceShuttleBuilder::~SpaceShuttleBuilder() {}

/**
 * @brief Builds a specific rocket for the SpaceShuttle based on the parameter
 * @param type - integer (integer (0=FalconNine and 1=FalconHeavy)
 * @return void
 */
void SpaceShuttleBuilder::buildRocket(int type) {
    Rocket *rocket;
    if (type == 0) rocket = new FalconNine;
    else rocket = new FalconHeavy;
    spaceShuttle->addRocket(rocket);
}

/**
 * @brief Builds a specific spaceCraft for the SpaceShuttle based on the parameter
 * @param type - integer (0=CrewDragon and 1=Dragon)
 * @return void
 */
void SpaceShuttleBuilder::buildSpaceCraft(int type) {
    SpaceCraftCreator *spaceCraft;
    if (type == 0) spaceCraft = new CrewDragonCreator;
    else spaceCraft = new DragonCreator;
    spaceShuttle->addSpaceCraft(spaceCraft->produceSpaceCraft());
    delete spaceCraft;
}

/**
 * @brief Returns the SpaceShuttle created
 * @param None
 * @return SpaceShuttle pointer
 */
SpaceShuttle *SpaceShuttleBuilder::getShuttle() const {
    return spaceShuttle;
}