#ifndef STATE_H
#define STATE_H

#include <iostream>
#include <string>
using namespace std;

class State
{
  private:
    std::string message;
  protected:
    virtual State* changeState()=0;
  public:
    State(std::string msg);
    virtual void fire() =0;
    virtual void dock() =0;
    virtual State* detach() =0;
    void setMessage(std::string);
    void addMessage(std::string);
    std::string getMessage();
};
#endif
