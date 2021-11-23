#include <iostream>
#include "Message.h"

using namespace std;

Message::Message(string commMedium, Coordinate* c, int idd) : CommunicationMedium(commMedium), coord(c), id_sent(idd)
{
   
}

Message::~Message()
{
	delete coord;
}

void Message::disapprove(int idd)
{
	isApprov=false;
	id_disapprove=idd;    
}

string Message::getCommMedium()
{
    return CommunicationMedium;
}

Coordinate* Message::getCoord()
{
	return coord;
}

string Message::getText()
{
    string st= string(to_string(id_disapprove)+" is at Coordinates (") +to_string(coord->getX())+ ", " + to_string(coord->getY())+")";
    return st;
}

bool Message::getApprov(){
	return isApprov;
}

bool Message::isHandled(){
	return hand;
}

void Message::handled(){
	hand=true;
}

int Message::getID() {
	return id_sent;
}
