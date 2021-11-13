//
// Created by Ishe on 2021/11/07.
//

#include "SpaceShuttle.h"
#include "FalconNine.h"
#include "FalconHeavy.h"

SpaceShuttle::SpaceShuttle() {

}

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
 * @param i  can either be 0 (Falcon Nine), or 1 (Falcon Heavy)
 * **/


void SpaceShuttle::addRocket(int i) {
    Rocket* r;

    if (i==0) {
        if (for_reuse.size()>=2) {
            r=for_reuse.front();
            r->setNumReuses(r->getNumReuses()+1);
            for_reuse.pop();
            testRocket(r);
            this->rocket=r;
            return;
        }

        r=new FalconNine();
        r->setNumReuses(r->getNumReuses()+1);
        testRocket(r);
        this->rocket=r;

    }
    else {
        r= new FalconHeavy();

        if (for_reuse.size()>=2) {
            Rocket* temp;
            if (for_reuse.size()==2) {
                for (int i=0;i<2;i++) {
                    Rocket* temp = for_reuse.front();
                    temp->setNumReuses(r->getNumReuses()+1);
                    for_reuse.pop();
                    testRocket(temp);
                    r->addFalconNine(temp);
                }  
                temp=new FalconNine();
                testRocket(temp);
                r->addFalconNine(temp);
            }
            else {
                for (int i=0;i<3;i++) {
                    temp = for_reuse.front();
                    temp->setNumReuses(r->getNumReuses()+1);
                    for_reuse.pop();
                    testRocket(temp);
                    r->addFalconNine(temp);
                }   
            }

            this->rocket=r;
            return;
        }

        Rocket* temp;
        for (int i=0;i<3;i++) {
            temp=new FalconNine();
            temp->setNumReuses(r->getNumReuses()+1);
            testRocket(temp);
            r->addFalconNine(temp);
        }

        this->rocket=r;
    }
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



