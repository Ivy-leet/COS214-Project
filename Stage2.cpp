#include "Stage2.h"
Stage2::Stage2(string msg): State(msg)
{
  setMessage(msg);
}

void Stage2::fire()
{
 setMessage("Stage 2 Request for Fire Received\nStage 2 Fire");
}

void Stage2::dock()
{
  setMessage("Stage 2 Request for Dock Received\nStage 2 is continuing the mission");
}

State* Stage2::detach()
{
  setMessage("Stage 2 Request for Detach Received\nStage 2 detach\nStage 2 commencing Earth reentry");
  return changeState();
}

State* Stage2::changeState()
{
  return nullptr;
}
