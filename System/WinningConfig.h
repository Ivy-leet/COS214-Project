#ifndef WINNINGCONFIG_H
#define WINNINGCONFIG_H

#include "WinningShuttle.h"

/**
 * @class WinningConfig "WinningConfig.h"
 * @brief A class which stores the Memento WinningShuttle. This class is the Caretaker participant in the Memento DP
 */

class WinningConfig
{
	private:
		WinningShuttle* bestShuttle;

	public:
		WinningConfig();
		~WinningConfig();
/**
 * @brief Returns the stored Memento(WinningShuttle)
 * @return WinningShuttle pointer
 */
		WinningShuttle* retrieveWinningShuttle();

/**
 * @brief Stores the Memento(WinningShuttle)
 * @param ws - WinningShuttle* 
 * @return void
 */
		void storeWinningShuttle(WinningShuttle* ws);
};

#endif
