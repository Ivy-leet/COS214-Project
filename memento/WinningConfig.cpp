#include "WinningConfig.h"

WinningShuttle* WinningConfig::retrieveWinningShuttle()
{
	return bestShuttle;
}

void WinningConfig::storeWinningShuttle(WinningShuttle* ws)
{
	bestShuttle = ws;
}
