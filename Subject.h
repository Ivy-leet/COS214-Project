#ifndef SUBJECT_H
#define SUBJECT_H

#include <vector>
#include <iostream>
#include "Observer.h"

public Subject{
	private:
		 vector<Observer> observers = new vector<Observer>();

	public:
		attach(Observer*);
		detach(Observer*);
		notify();
};

#endif
