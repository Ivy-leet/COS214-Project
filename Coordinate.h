#ifndef COORDINATE_H
#define COORDINATE_H

#include <string>
#include <iostream>

using namespace std;

class Coordinate{
	private:
		int x;
		int y;

	public:
		Coordinate(int, int);
		bool compare(Coordinate*);
		int getY();
		int getX();
		string request();
		string confirm();
};	

#endif
