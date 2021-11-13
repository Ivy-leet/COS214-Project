#include "Stage1.h"
Stage1::Stage1(string msg): State(msg)
{
  message = msg;
}

void Stage1::fire()
{
 cout<<"Stage 1 fired"<<endl;
}

void Stage1::dock()
{
  cout<<"Stage 1 is being docked"<<endl;
}

State* Stage1::detach()
{
  State* stage2 = changeState();
  dock();
  return stage2;
}

State* Stage1::changeState()
{
  State* stage2 = new Stage2(message);
  return stage2;
}

string Stage1::getMessage()
{
  return message;
}
