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
		 * @brief Updates the observer about any changes made to a subject
		 * @param isShu True if subject wants to update the observer
		 * @return void
		*/
		void update(bool);

		/**
		 * @brief Pauses space shuttle
		 * @return void
		*/
		void pauseMission();

		/**
		 * @brief Returns space craft back to earth
		 * @return void
		*/
		void rett();

		/**
		 * @brief Sets the subject that will be observed
		 * @return void
		*/
		void setSubject(SpaceShuttle*);

		/**
		 * @brief Returns the subject that has been observed
		 * @return Subject*
		*/
		Subject* getSubject();

		/**
		 * @brief Starts the launch of the space shuttle
		 * @return void
		*/
		void startMission();
		~MissionControl();
};

#endif
