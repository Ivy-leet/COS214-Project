#ifndef COORDINATE_H
#define COORDINATE_H

#include <string>
#include <iostream>

using namespace std;

/**
 * @class Coordinate "Coordinate.h"
 * @brief Stores the coordinates of the starlink
*/

class Coordinate{
	private:
		int x;
		int y;

	public:
		Coordinate(int, int);

		/**
		 * @brief Compares the current coordinates to the coordinates being passed through
		 * @param coord
		 * @return bool
		*/
		bool compare(Coordinate*);

		/**
		 * @brief Returns the x value
		 * @return int
		*/
		int getY();

		/**
		 * @brief Returns the y value
		 * @return int
		*/
		int getX();

		/**
		 * @brief Starlink requests for a position
		 * @return string
		*/
		string request();

		/**
		 * @brief Confirms that a starlink has occupied a specific position
		 * @return string
		*/
		string confirm();
};	

#endif
