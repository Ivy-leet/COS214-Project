//
// Created by Ishe on 2021/11/07.
//

#include "FalconHeavy.h"


void FalconHeavy::addFalconNine(Rocket* r) {
    if (falcon_nines.size()>=3) return;

    falcon_nines.push_back(r);
}

Rocket* FalconHeavy::removeFalconNine() {
    Rocket* r=falcon_nines.front();
    falcon_nines.pop_front();

    if (falcon_nines.size()==0) 
        falcon_nines.clear();
        
    return r;
}