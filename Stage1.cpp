#include "Stage1.h"
Stage1::Stage1(string msg): State(msg)
{
  message = msg;
}

void Stage1::fire()
{
 message = "Stage 1 fire";
}

void Stage1::dock()
{
  message += "\nStage 1 docking";
}

State* Stage1::detach()
{
  message = "Stage 1 detach";
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
