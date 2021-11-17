#ifndef WINNINGSHUTTLE_H
#define WINNINGSHUTTLE_H

#include "ShuttleState.h"
#include "Rocket.h"
#include "SpaceCraft.h"
#include "SpaceShuttle.h"

// Memento

class WinningShuttle
{
	private:
		friend class SpaceShuttleBuilder;
		ShuttleState* shuttlestate;
		SpaceShuttle* spaceShuttle;

		
		WinningShuttle(Rocket* r, SpaceCraft* s);
		void setWinningShuttle(SpaceShuttle*);
		SpaceShuttle* getWinningShuttle();

	public:
		~WinningShuttle();
};

#endif
