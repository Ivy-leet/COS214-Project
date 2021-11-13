#ifndef STATE_H
#define STATE_H

#include <iostream>
#include <string>
using namespace std;

class State
{
  private:
    string message;
  protected:
    virtual State* changeState()=0;
  public:
    State(string msg);
    virtual void fire() =0;
    virtual void dock() =0;
    virtual State* detach() =0;
    string getMessage() ;


};
#endif
