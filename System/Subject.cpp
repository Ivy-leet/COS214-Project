#include "Subject.h"
#include <algorithm>

void Subject::attach(Observer* observer){
	observers.push_back(observer);
}

void Subject::detach(Observer* observer){
	observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());	
}

void Subject::notify(bool isShu){
	for(Observer* o : observers){
		o->update(isShu);
	}
}

void Subject::setCurState(string st, bool isShu){
	currState=st;
	notify(isShu);
}

string Subject::getCurState(){
	return currState;
}
