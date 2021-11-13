#include "SpaceShuttleBuilder.h"

/**
 * @brief Builds a specific rocket for the SpaceShuttle based on the parameter
 * @param type - integer (integer (0=FalconNine and 1=FalconHeavy)
 * @return void
 */
void SpaceShuttleBuilder::buildRocket(int type) {
    Rocket *rocket = (type == 0) ? (Rocket *) new FalconNine : (Rocket *) new FalconHeavy;
    spaceShuttle->addRocket(rocket);
}

/**
 * @brief Builds a specific spaceCraft for the SpaceShuttle based on the parameter
 * @param type - integer (0=CrewDragon and 1=Dragon)
 * @return void
 */
void SpaceShuttleBuilder::buildSpaceCraft(int type) {
    SpaceCraftCreator *spaceCraft = (type == 0) ? (SpaceCraftCreator *) new CrewDragonCreator : (SpaceCraftCreator *) new DragonCreator;
    spaceShuttle->addSpaceCraft(spaceCraft->produceSpaceCraft());
}

/**
 * @brief Returns the SpaceShuttle created
 * @param None
 * @return SpaceShuttle pointer
 */
SpaceShuttle *SpaceShuttleBuilder::getShuttle() const {
    return spaceShuttle;
}