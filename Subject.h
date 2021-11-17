#ifndef SUBJECT_H
#define SUBJECT_H

#include "Observer.h"

public Subject{
	private:
		 List<Observer> observers = new List<Observer>();

	public:
		attach(Observer*);
		detach(Observer*);
		notify();
};

#endif
