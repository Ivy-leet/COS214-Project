#include "Stage1.h"
Stage1::Stage1(string msg): State(msg)
{
  setMessage(msg);
}

void Stage1::fire()
{
 setMessage("Stage 1 fire");
}

void Stage1::dock()
{
  addMessage("\nStage 1 reentering Earth");
}

State* Stage1::detach()
{
  setMessage("Stage 1 detach");
  dock();
  return changeState();
}

State* Stage1::changeState()
{
  return new Stage2(getMessage());
}
