#include "WinningShuttle.h"

WinningShuttle::WinningShuttle(Rocket* r, SpaceCraft* s) : spaceShuttle(nullptr)
{
	shuttlestate = new ShuttleState(r, s);
}

WinningShuttle::~WinningShuttle()
{
	if(shuttlestate != nullptr)
		delete shuttlestate;
}

void WinningShuttle::setWinningShuttle(SpaceShuttle* s) {
	spaceShuttle=s;
}

SpaceShuttle* WinningShuttle::getWinningShuttle() {
	return spaceShuttle;
}