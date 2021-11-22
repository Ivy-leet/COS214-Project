#include <iostream>
#include "Message.h"

using namespace std;

Message::Message(string commMedium)
{
    CommunicationMedium = commMedium;
}

Message::~Message()
{
}

void Message::SetText(string inText)
{
    ActualMessage = inText;
}

string Message::getCommMedium()
{
    return CommunicationMedium;
}

string Message::getText()
{
    return ActualMessage;
}