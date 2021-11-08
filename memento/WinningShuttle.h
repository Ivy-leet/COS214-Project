#ifndef WINNINGSHUTTLE_H
#define WINNINGSHUTTLE_H

#include "ShuttleState.h"
#include "Rocket.h"
#include "SpaceCraft.h"

class WinningShuttle
{
	private:
		ShuttleState* shuttlestate;

	public:
		~WinningShuttle();
		WinningShuttle(Rocket* r, SpaceCraft* s);
};

#endif
