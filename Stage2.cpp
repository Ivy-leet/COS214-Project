#include "Stage2.h"
Stage2::Stage2(string msg): State(msg)
{
  setMessage(msg);
}

void Stage2::fire()
{
 setMessage("Stage 2 fire");
}

void Stage2::dock()
{
  setMessage("Stage 2 is reaching it's destination");
}

State* Stage2::detach()
{
  setMessage("Stage 2 detach\nStage 2 reentering Earth");
  return changeState();
}

State* Stage2::changeState()
{
  return nullptr;
}
