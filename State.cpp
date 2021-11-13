#include "State.h"

using namespace std;
State::State(string msg)
{
  message = msg;
}
string State::getMessage()
{
  return message;
}
