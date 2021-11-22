#include "WinningConfig.h"

WinningConfig::WinningConfig() : bestShuttle(nullptr)
{
	
}

WinningConfig::~WinningConfig()
{
	bestShuttle=nullptr;
}

WinningShuttle* WinningConfig::retrieveWinningShuttle()
{
	return bestShuttle;
}

void WinningConfig::storeWinningShuttle(WinningShuttle* ws)
{
	if(bestShuttle != nullptr)
		delete bestShuttle;
	bestShuttle = ws;
}
