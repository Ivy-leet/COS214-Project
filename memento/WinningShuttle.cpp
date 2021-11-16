#include "WinningShuttle.h"

WinningShuttle::WinningShuttle(Rocket* r, SpaceCraft* s)
{
	shuttlestate = new ShuttleState(r, s);
}

WinningShuttle::~WinningShuttle:()
{
	if(shuttlestate != nullptr)
		delete shuttlestate;
}