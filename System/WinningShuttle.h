#ifndef WINNINGSHUTTLE_H
#define WINNINGSHUTTLE_H

#include "Rocket.h"
#include "SpaceCraft.h"
#include "SpaceShuttle.h"


/**
 * @class WinningShuttle "WinningShuttle.h"
 * @brief A class which stores the state of the SpaceShuttle. This class is the Memento participant in the Memento DP
 */

class WinningShuttle
{
	private:
		friend class SpaceShuttleBuilder;
		SpaceShuttle* spaceShuttle;

		
		WinningShuttle(SpaceShuttle* s);
	
/**
 * @brief Stores the WinningShuttle(SpaceShuttle)
 * @param s - SpaceShuttle*
 * @return void
 */
		void setWinningShuttle(SpaceShuttle*);
	
/**
 * @brief Returns the WinningShuttle(SpaceShuttle)
 * @return SpaceShuttle pointer
 */
		SpaceShuttle* getWinningShuttle();

	public:
		~WinningShuttle();
};

#endif
