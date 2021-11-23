#include "Coordinate.h"

Coordinate::Coordinate(int xx, int yy) : x(xx), y(yy){
	
}

bool Coordinate::compare(Coordinate* i){
	return ((i->getX() == x) && (i->getY() == y));
}

int Coordinate::getX(){
	return x;
}

int Coordinate::getY(){
        return y;
}

string Coordinate::request(){
	// string m="Are Coordinates: ("+to_string(x)+", "+to_string(y)+") Available.";
	return string("Are Coordinates (")+to_string(x)+", "+to_string(y)+") Available?";
}

string Coordinate::confirm(){
        return string("Coordinates (")+to_string(x)+", "+to_string(y)+") are reserved by Starlink: with ID = ";
}
