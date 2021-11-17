#include "WinningShuttle.h"

WinningShuttle::WinningShuttle(SpaceShuttle* s) : spaceShuttle(s)
{
	// shuttlestate = new ShuttleState(r, s);
}

WinningShuttle::~WinningShuttle()
{
	if(shuttlestate != nullptr)
		delete shuttlestate;
}

void WinningShuttle::setWinningShuttle(SpaceShuttle* s) {
	if (s->getTotalCost()<spaceShuttle->getTotalCost())
		spaceShuttle=s;
}

SpaceShuttle* WinningShuttle::getWinningShuttle() {
	return spaceShuttle;
}