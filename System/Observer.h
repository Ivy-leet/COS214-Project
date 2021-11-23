#ifndef OBSERVER_H
#define OBSERVER_H

/**
 * @class Observer "Observer.h"
 * @brief Abstract class for observing functions
*/

class Observer{
	public:
		virtual void update(bool)=0;
};

#endif
