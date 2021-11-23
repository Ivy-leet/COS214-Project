#include "MissionControl.h"
#include "HaltCommand.h"
#include "LaunchCommand.h"
#include "ReturnCommand.h"


MissionControl::MissionControl(SpaceShuttle* sh){
	subject=sh;	
	subject->attach(this);

        control=new Controller(new LaunchCommand(sh), new HaltCommand(sh), new ReturnCommand(sh));

	s_subject=sh->getRocket();
	s_subject->attach(this);
}

MissionControl::~MissionControl(){
	delete subject;
	delete s_subject;
	delete control;
}
void MissionControl::update(bool isShu){
	if(isShu){
		cout<<"Mission Control gets update that: "<<subject->getCurState()<<endl<<endl;	
	}else{
		cout<<"Mission Control gets update that: "<<s_subject->getCurState()<<endl<<endl;
	}
}

void MissionControl::setSubject(SpaceShuttle* sh){
	subject=sh;
}

Subject* MissionControl::getSubject(){
	return subject;
}

void MissionControl::startMission(){
	subject->setCurState("SpaceShuttle has begun Launching Sequence.", true);
	control->launch();
	subject->setCurState("SpaceShuttle has Reached Its destination.", true);
}

void MissionControl::pauseMission(){
        subject->setCurState("SpaceShuttle has paused Launching Sequence.", true);
        control->halt();
}

void MissionControl::rett(){
	subject->setCurState("SpaceCraft is returning back to Earth.", true);
	control->ret();
	cout<<endl;
	subject->setCurState("SpaceCraft has returned back to Earth.", true);
}
