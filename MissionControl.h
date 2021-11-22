#ifndef MISSIONCONTROL_H
#define MISSIONCONTROL_H

#include "SpaceShuttle.h"
#include "Controller.h"

class MissionControl : public Observer{
	private:
		string observerState;
		Subject* subject;
		Subject* s_subject;
		Controller* control;

	public:
		MissionControl(SpaceShuttle*);
		void update(bool);
		void pauseMission();
		void rett();
		void setSubject(SpaceShuttle*);
		Subject* getSubject();
		void startMission();
		~MissionControl();
};

#endif
