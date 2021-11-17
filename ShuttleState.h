#ifndef SHUTTLESTATE_H
#define SHUTTLESTATE_H

#include "Rocket.h"
#include "SpaceCraft.h"

class ShuttleState
{
	private:
		Rocket* rocket;
		SpaceCraft* spacecraft;

	public:
		ShuttleState(Rocket* r, SpaceCraft* s);
		Rocket* getRocket();
		SpaceCraft* getSpaceCraft();
};

#endif
