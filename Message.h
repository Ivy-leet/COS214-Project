#ifndef MESSAGE_H
#define MESSAGE_H

#include <string>

using namespace std;

class Message //The request being handled in Chain of Responsibility
{
private:
    /* data */
    string CommunicationMedium = ""; //determines what typeof object handles the request
    string ActualMessage;

public:
    Message(string commMedium); //Instantiated with specified string variable (Laser or Radio)
    void SetText(string inText); //To set the text of the message
    string getText();
    string getCommMedium();
    ~Message();
};

#endif

