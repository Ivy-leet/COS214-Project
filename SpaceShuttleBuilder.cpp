#include "SpaceShuttleBuilder.h"

SpaceShuttleBuilder::SpaceShuttleBuilder() {
    spaceShuttle = new SpaceShuttle;
    srand((unsigned) time(0));
}

SpaceShuttleBuilder::~SpaceShuttleBuilder() {}

/**
 * @brief Builds a specific rocket for the SpaceShuttle based on the parameter
 * @param type - integer (integer (0=FalconNine and 1=FalconHeavy)
 * @return void
 */
void SpaceShuttleBuilder::buildRocket(int type) {
    Rocket *rocket;
    if (type == 0) 
    {
        cout<<"==================================\tTESTING ROCKET: 1\t========================================\033[0m\n";
        if (for_reuse.size()>=2)
        {
            rocket=for_reuse.front();
            rocket->setNumReuses(rocket->getNumReuses()+1);
            for_reuse.pop();
            testRocket(rocket);
        }
        else {
            rocket=new FalconNine();
            rocket->setNumReuses(rocket->getNumReuses()+1);
            testRocket(rocket);
        }
        cout<<"\033[37m=========================================================================================================\n\n";
    }
    else 
    {
        rocket=new FalconHeavy();
        Rocket* temp;
        if (for_reuse.size()>=3) {
            for (int i=0;i<3;i++) {
                cout<<"==================================\tTESTING ROCKET: "<<i+1<<"\t========================================\033[30m\n";
                temp=for_reuse.front();
                temp->setNumReuses(temp->getNumReuses()+1);
                for_reuse.pop();
                testRocket(temp);
                rocket->addFalconNine(temp);
                cout<<"\033[37m=========================================================================================================\033[30m\n\n";
            }
        }
        else {
            for (int i=0;i<3;i++) {
                cout<<"==================================\tTESTING ROCKET: "<<i+1<<"\t========================================\033[30m\n";
                cout<<"TESTING ROCKET: "<<i+1<<endl;
                temp=new FalconNine();
                temp->setNumReuses(temp->getNumReuses()+1);
                testRocket(temp);
                rocket->addFalconNine(temp);
                cout<<"\033[37m=========================================================================================================\033[30m\n\n";
            }
        }

        rocket->setNumReuses(1);
    }
    spaceShuttle->addRocket(rocket);
}

/**
 * @brief Builds a specific spaceCraft for the SpaceShuttle based on the parameter
 * @param type - integer (0=CrewDragon and 1=Dragon)
 * @return void
 */
void SpaceShuttleBuilder::buildSpaceCraft(bool hasSpaceCraft, int type) {
    if (!hasSpaceCraft) return;

    SpaceCraftCreator *spaceCraft;
    if (type == 0) spaceCraft = new CrewDragonCreator;
    else if (type == 1) spaceCraft = new DragonCreator;
    spaceShuttle->addSpaceCraft(spaceCraft->produceSpaceCraft());
    delete spaceCraft;
}

void SpaceShuttleBuilder::buildStarlinks(bool hasStarlinks, int num) {
    if (!hasStarlinks) return;

    spaceShuttle->addStarlinks(num);
}


/**
 * @brief Returns the SpaceShuttle created
 * @param None
 * @return SpaceShuttle pointer
 */
SpaceShuttle *SpaceShuttleBuilder::getShuttle() const {
    return spaceShuttle;
}



void SpaceShuttleBuilder::rocketReuse(Rocket* r) {
    if (r->getNumReuses()>=10) delete r;
    else for_reuse.push(r);
}

WinningShuttle* SpaceShuttleBuilder::createMemento() {
    return new WinningShuttle(spaceShuttle);
}

void SpaceShuttleBuilder::setMemento(WinningShuttle* w) {
    
    // if (w->getWinningShuttle()->getTotalCost()< spaceShuttle->getTotalCost()) 
        spaceShuttle=w->getWinningShuttle();
}




Rocket* SpaceShuttleBuilder::testRocket(Rocket* r) {
    
    double probability;
    int lowerLimit=0;
    int x, count=0;

    do {
        cout<<"TEST: "<<count++<<endl<<endl;
        x=0;
        int randNum;
        for (int i=0;i<10;i++)
        {
            // Calculate a random probability
            randNum= lowerLimit+(rand()%(100-lowerLimit+1));
            probability=randNum/100.0;

            if (probability>=0.95)
                x++;

           
            
        }

        lowerLimit=randNum;

         /**
             * Progress Bar
             * Is representing the percentage of the probability of the test
            * */

        cout<<"[";
        for (int k=0; k<lowerLimit;k++)
        {
            cout<<"▉";
        }
        for (int k=0;k<100-lowerLimit;k++)
            cout<<" ";
        
        cout<<"]\n";
        
    } while (!binomialTest(x, 10, 0.95));

    return r;
}

int SpaceShuttleBuilder::binomialC(int n, int k) {
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

bool SpaceShuttleBuilder::binomialTest(int x, int n, double p) {
    double pValue=0;
    for (int i=0;i<=x;i++)
        pValue+=(this->binomialC(n,i)*(pow(p,i))*(pow(1-p,n-i))); 
    bool didPass=false;
    // cout<<pValue<<endl;
    if (pValue>0.05)
        didPass=true;

    if (didPass) cout<<"\033[32m"<<"\t\tPASS!\n"<<"\033[0m"<<endl<<endl;
    else cout<<"\033[31m"<<"\t\tFAIL!\n"<<"\033[0m"<<endl<<endl;

    return didPass;
    // return pValue;
}