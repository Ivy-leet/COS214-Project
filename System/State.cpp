#include "State.h"


using namespace std;
State::State(std::string m) : message(m)
{

}

void State::addMessage(std::string m)
{
  message += m;
}

void State::setMessage(std::string m)
{
  message = m;
}

std::string State::getMessage()
{
  return message;
}
