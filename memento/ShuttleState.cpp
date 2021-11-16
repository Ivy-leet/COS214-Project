#include "ShuttleState.h"

ShuttleState::ShuttleState(Rocket* r, SpaceCraft* s)
{
	rocket = r;
	spacecraft = s;
}

Rocket* ShuttleState::getRocket()
{
	return rocket;
}

SpaceCraft* ShuttleState::getSpaceCraft()
{
	return spacecraft;
}
