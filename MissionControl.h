#ifndef MISSIONCONTROL_H
#define MISSIONCONTROL_H

public MissionControl : Observer{
	private:
		string observerState;
		SpaceShuttle shuttle;

	public:
		MissionControl(SpaceShuttle*);
		void Update();
		void setSubject(SpaceShuttle*);
		SpaceShuttle* getSubject();
};
#endif
