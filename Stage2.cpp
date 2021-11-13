#include "Stage2.h"
Stage2::Stage2(string msg): State(msg)
{
  message = msg;
}

void Stage2::fire()
{
 cout<<"Stage 2 fired"<<endl;
}

void Stage2::dock()
{
  cout<<"Stage 2 is reaching destination"<<endl;
}

State* Stage2::detach()
{
  return changeState();
}

State* Stage2::changeState()
{
  return nullptr;
}

string Stage2::getMessage()
{
  return message;
}
