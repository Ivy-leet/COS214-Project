#ifndef MESSAGE_H
#define MESSAGE_H

#include <string>
#include "Coordinate.h"

using namespace std;

class Message //The request being handled in Chain of Responsibility
{
private:
    /* data */
    string CommunicationMedium = ""; //determines what typeof object handles the request
    Coordinate* coord;
    bool isApprov=true;
    int id_sent;
    int id_disapprove=-1;
    bool hand;

public:
    Message(string commMedium, Coordinate*, int); //Instantiated with specified string variable (Laser or Radio)
    string getText();    		//To set the text of the message
    void disapprove(int);
    bool isHandled();
    void handled();
    Coordinate* getCoord();
    string getCommMedium();
    bool getApprov();
    int getID();
    ~Message();
};

#endif

