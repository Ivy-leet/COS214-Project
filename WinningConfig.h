#ifndef WINNINGCONFIG_H
#define WINNINGCONFIG_H

#include "WinningShuttle.h"

// Caretaker

class WinningConfig
{
	private:
		WinningShuttle* bestShuttle;

	public:
		WinningConfig();
		~WinningConfig();
		WinningShuttle* retrieveWinningShuttle();
		void storeWinningShuttle(WinningShuttle* ws);
};

#endif
