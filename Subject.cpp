#include "Subject.h"
#include <algorithm>


void Subject::attach(Observer* observer){
	observers.push_back(observer);
}

void Subject::detach(Observer* observer){
	observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());	
}

void Subject::notify(){
	for(Observer* o : observers){
		o->update();
	}
}