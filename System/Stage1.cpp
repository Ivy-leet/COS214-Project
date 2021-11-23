#include "Stage1.h"

Stage1::Stage1(string msg): State(msg)
{
  setMessage(msg);
}

void Stage1::fire()
{
 setMessage("Stage 1 Request for Fire Received\nStage 1 Fire");
}

void Stage1::dock()
{
  addMessage("Stage 1 Auto-Dock engaging\nStage 1 commencing Earth reentry");
}

State* Stage1::detach()
{
  setMessage("\nStage 1 Request for Detach Received\nStage 1 detach");
  dock();
  return changeState();
}

State* Stage1::changeState()
{
  return new Stage2(getMessage());
}
