#include "Stage2.h"
Stage2::Stage2(string msg): State(msg)
{
  message = msg;
}

void Stage2::fire()
{
 message = "Stage 2 fire";
}

void Stage2::dock()
{
  message = "Stage 2 is reaching it's destination";
}

State* Stage2::detach()
{
  message = "Stage 2 detach";
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
