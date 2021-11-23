#ifndef SUBJECT_H
#define SUBJECT_H

#include "Observer.h"
#include <vector>
#include <iostream>

using namespace std;

/**
 * @class Subject
 * @brief Objects created from this class will be observed
*/

class Subject{
	private:
		 vector<Observer*> observers;
		 string currState;		

	public:
		/**
		 * @brief Attaches observers to subject
		 * @param observer Observer to be attaches
		 * @return void
		*/
		void attach(Observer*);

		/**
		 * @brief Detaches observers from subject
		 * @param observer	Observer to be detached
		 * @return void
		*/
		void detach(Observer*);

		/**
		 * @brief Sets state to the most recent state
		 * @param message State message
		 * @param isSubject If true, then the observers will get notified
		 * @return void 
		*/
		void setCurState(string, bool);

		/**
		 * @brief Returns the state
		 * @return string
		*/
		string getCurState();

		/**
		 * @brief Notifies observers of any change
		 * @param isShu If true, then the observers will be notified
		 * @return void
		*/
		void notify(bool);
};

#endif
