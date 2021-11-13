
#include "SpaceShuttle.h"
#include "FalconNine.h"
#include "FalconHeavy.h"

/**
 * Maximum number of reuses of a rocket is 10
 * If less, add to for_reuse queue.
 * If equal or more, delete (write-off)
 * 
 * @param r Rocket to be reused or written-off
 * **/

void SpaceShuttle::rocketReuse(Rocket* r) {
    if (r->getNumReuses()>=10) delete r;
    else for_reuse.push(r);
}

/**
 * Function responsible for adding a rocket to a SpaceShuttle object
 * @param r - pointer to a Rocket object of type FalconNine or FalconHeavy
 * @return void
 */
void SpaceShuttle::addRocket(Rocket *r) {
    rocket = r;
}

/**
 * Function responsible for adding a spacecraft to a SpaceShuttle object
 * @param t - pointer to a SpaceCraft objecy of type CrewDragon or Dragon
 * @return void
 */
void SpaceShuttle::addSpaceCraft(SpaceCraft *s) {
    spaceCraft = s;
}

double SpaceShuttle::getTotalWeight() const {
    return rocket->getCargoWeight() + spaceCraft->getCargoWeight();
}

double SpaceShuttle::getTotalCost() const {
    return rocket->getCost() + spaceCraft->getCost();
}

Rocket *SpaceShuttle::getRocket() {
    return rocket;
}

SpaceCraft *SpaceShuttle::getSpaceCraft() {
    return spaceCraft;
}


/**
 * Test section for the rockets. 
 * **/

Rocket* SpaceShuttle::testRocket(Rocket* r) {
    srand((unsigned) time(0));
    double probability;
    int lowerLimit;
    int x;

    do {
        x=0;
        int randNum;
        for (int i=0;i<10;i++)
        {
            // Calculate a random probability
            randNum= lowerLimit+(rand()%(100-lowerLimit+1));
            probability=randNum/100.0;

            if (probability>=0.95)
                x++;

            /**
             * Progress Bar
             * Is representing the percentage of the probability of the test
            * */
            cout<<"[";
            for (int i=0; i<randNum;i++)
            {
                cout<<"▉";
            }
            for (int i=0;i<100-randNum;i++)
                cout<<" ";
            
            cout<<"]\n\n";
        }

        lowerLimit=randNum;
        
    } while (!binomialTest(x, 10, 0.95));

    return r;
}

int SpaceShuttle::binomialC(int n, int k) {
    int ans=1;

    if (k> n-k)
        k=n-k;

    for (int i=0;i<k;i++)
    {
        ans*=(n-i);
        ans/=(i+1);
    }

    return ans;
}

bool SpaceShuttle::binomialTest(int x, int n, double p) {
    double pValue=0;
    for (int i=0;i<=x;i++)
        pValue+=(this->binomialC(n,i)*(pow(p,i))*(pow(1-p,n-i))); 
    bool didPass=false;
    // cout<<pValue<<endl;
    if (pValue>0.05)
        didPass=true;

    if (didPass) cout<<"PASS!\n";
    else cout<<"FAIL!\n";

    return didPass;
    // return pValue;
}



