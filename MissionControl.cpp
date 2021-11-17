#include "MissionControl.h"

MissionControl::MissionControl(SpaceShuttle* sh){
	shuttle=sh;	
}

void MissionControl::update(){
	cout<<"Mission Control gets update that: "<<endl;	
}

void MissionControl::setSubject(SpaceShuttle* sh){
	shuttle=sh;
}

SpaceShuttle* MissionControl::getSubject(){
	return shuttle;
}

