#ifndef SUBJECT_H
#define SUBJECT_H

#include "Observer.h"
#include <vector>
#include <iostream>

using namespace std;

class Subject{
        private:
                 vector<Observer*> observers;

        public:
                void attach(Observer*);
                void detach(Observer*);
                void notify();
};

#endif

