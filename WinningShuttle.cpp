#include "WinningShuttle.h"

WinningShuttle::WinningShuttle(SpaceShuttle* s) : spaceShuttle(s)
{
}

WinningShuttle::~WinningShuttle()
{
	delete spaceShuttle;
	spaceShuttle=nullptr;
}

/**
 * @brief Stores the WinningShuttle(SpaceShuttle)
 * @param s - SpaceShuttle*
 * @return void
 */

void WinningShuttle::setWinningShuttle(SpaceShuttle* s) {
	spaceShuttle=s;
}

/**
 * @brief Returns the WinningShuttle(SpaceShuttle)
 * @param None
 * @return SpaceShuttle pointer
 */


SpaceShuttle* WinningShuttle::getWinningShuttle() {
	return spaceShuttle;
}
