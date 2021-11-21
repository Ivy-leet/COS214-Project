#include "WinningShuttle.h"

WinningShuttle::WinningShuttle(SpaceShuttle* s) : spaceShuttle(s)
{
}

WinningShuttle::~WinningShuttle()
{
	spaceShuttle=nullptr;
}

void WinningShuttle::setWinningShuttle(SpaceShuttle* s) {
	spaceShuttle=s;
}

SpaceShuttle* WinningShuttle::getWinningShuttle() {
	return spaceShuttle;
}