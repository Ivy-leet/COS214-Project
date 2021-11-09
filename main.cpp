#include "State.h"
#include "Stage1.h"
#include "Stage2.h"
#include "Rocket.h"
#include <iostream>

using namespace std;

//PURELY FOR TESTING STATE DP
int main()
{
  Rocket* rocket = new Rocket();
  cout<<"STAGE ONE STARTING"<<endl;
  rocket->fire();
  rocket->detach();


  cout<<"STAGE TWO STARTING"<<endl;
  rocket->fire();
  rocket->dock();
}
