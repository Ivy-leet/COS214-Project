#include "WinningConfig.h"

WinningConfig::WinningConfig() : bestShuttle(nullptr)
{
	
}

WinningConfig::~WinningConfig()
{
	bestShuttle=nullptr;
}

/**
 * @brief Returns the stored Memento(WinningShuttle)
 * @param None
 * @return WinningShuttle pointer
 */

WinningShuttle* WinningConfig::retrieveWinningShuttle()
{
	return bestShuttle;
}

/**
 * @brief Stores the Memento(WinningShuttle)
 * @param ws - WinningShuttle* 
 * @return void
 */

void WinningConfig::storeWinningShuttle(WinningShuttle* ws)
{
	if(bestShuttle != nullptr)
		delete bestShuttle;
	bestShuttle = ws;
}
