#ifndef MESSAGE_H
#define MESSAGE_H

#include <string>
#include "Coordinate.h"

using namespace std;

/**
 * @class Message "Message.h"
 * @brief This class is the request to be handled in the Chain of Responsibility design pattern
*/

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

    /**
     * @brief Returns the text of the message
     * @return string
    */
    string getText();    		//To set the text of the message

    /**
     * @brief Called when a starlink has already occupied a specific coordinate
     * @return void
    */
    void disapprove(int);

    /**
     * @brief Returns true if request has been handled
     * @return void
    */
    bool isHandled();

    /**
     * @brief Called when a coordinate is free and can be occupies 
     * @return void
    */
    void handled();

    /**
     * @brief Returns the coordinates
     * @return Coordinate*
    */
    Coordinate* getCoord();

    /**
     * @brief Returns communication medium - either "Laser" or "Radio"
     * @return string
    */
    string getCommMedium();

    /**
     * @brief Returns isApprov
     * @return bool 
    */
    bool getApprov();

    /**
     * @brief Returns Starlink ID
     * @return int
    */
    int getID();
    ~Message();
};

#endif

