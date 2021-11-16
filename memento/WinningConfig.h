#ifndef WINNINGCONFIG_H
#define WINNINGCONFIG_H

#include "WinningShuttle.h"

class WinningConfig
{
	private:
		WinningShuttle* bestShuttle;

	public:
		WinningShuttle* retrieveWinningShuttle();
		void storeWinningShuttle(WinningShuttle* ws);
};

#endif
