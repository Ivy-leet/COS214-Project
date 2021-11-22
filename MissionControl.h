#ifndef MISSIONCONTROL_H
#define MISSIONCONTROL_H

#include "SpaceShuttle.h"
#include "Controller.h"

/**
 * @class MissionControl
 * @brief Concrete Observer
*/

class MissionControl : public Observer{
	private:
		string observerState;
		Subject* subject;
		Subject* s_subject;
		Controller* control;

	public:
		MissionControl(SpaceShuttle*);

		/**
		 * @brief
		 * @param
		 * @return void
		*/
		void update(bool);

		/**
		 * @brief
		 * @return void
		*/
		void pauseMission();

		/**
		 * @brief
		 * @return void
		*/
		void rett();

		/**
		 * @brief
		 * @return void
		*/
		void setSubject(SpaceShuttle*);

		/**
		 * @brief
		 * @return Subject*
		*/
		Subject* getSubject();

		/**
		 * @brief
		 * @return void
		*/
		void startMission();
		~MissionControl();
};

#endif
