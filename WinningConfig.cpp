#include "WinningConfig.h"

WinningConfig::WinningConfig() : bestShuttle(nullptr)
{
	
}

WinningShuttle* WinningConfig::retrieveWinningShuttle()
{
	return bestShuttle;
}

void WinningConfig::storeWinningShuttle(WinningShuttle* ws)
{
	bestShuttle = ws;
}
