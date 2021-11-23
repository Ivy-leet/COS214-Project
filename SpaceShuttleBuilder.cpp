#include "SpaceShuttleBuilder.h"

SpaceShuttleBuilder::SpaceShuttleBuilder() {
    // spaceShuttle = new SpaceShuttle;
    srand((unsigned) time(0));
}

SpaceShuttleBuilder::~SpaceShuttleBuilder() {
    spaceShuttle=nullptr;
    delete spaceShuttle;

    int size=for_reuse.size();
    for (int i=0;i<size; i++) {
        Rocket* r=for_reuse.top();
        for_reuse.pop();

        delete r;
    }

}

/**
 * @brief Builds a specific rocket for the SpaceShuttle based on the parameter
 * @param type - integer (integer (0=FalconNine and 1=FalconHeavy)
 * @return void
 */
void SpaceShuttleBuilder::buildRocket(int type) {
    spaceShuttle=new SpaceShuttle;
    Rocket *rocket;
    if (type == 0) 
    {
        cout<<"==================================\tTESTING ROCKET: 1\t========================================\033[0m\n";
        if (for_reuse.size()>=2)
        {
            rocket=for_reuse.top();
            rocket->setNumReuses(rocket->getNumReuses()+1);
            rocket->setState(new Stage1("Rocket class"));
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
                cout<<"\033[37m==================================\tTESTING ROCKET: "<<i+1<<"\t========================================\033[30m\n";
                temp=for_reuse.top();
                temp->setNumReuses(temp->getNumReuses()+1);
                for_reuse.pop();
                testRocket(temp);
                rocket->addFalconNine(temp);
                cout<<"\033[37m=========================================================================================================\033[30m\n\n";
            }
        }
        else {
            for (int i=0;i<3;i++) {
                cout<<"\033[37m==================================\tTESTING ROCKET: "<<i+1<<"\t========================================\033[30m\n";
                // cout<<"TESTING ROCKET: "<<i+1<<endl;
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


void SpaceShuttleBuilder::buildSpaceCraft(bool hasSpaceCraft, int type) {
    if (!hasSpaceCraft) return;

    SpaceCraftCreator *spaceCraft;
    if (type == 0) spaceCraft = new CrewDragonCreator;
    else if (type == 1) spaceCraft = new DragonCreator;
    spaceShuttle->addSpaceCraft(spaceCraft->produceSpaceCraft());
    delete spaceCraft;
}

void SpaceShuttleBuilder::buildStarlinks(bool hasStarlinks, int num, Handler* gCrew) {
    if (!hasStarlinks) return;

    spaceShuttle->addStarlinks(num, gCrew);
}


/**
 * @brief Returns the SpaceShuttle created
 * @param None
 * @return SpaceShuttle pointer
 */
SpaceShuttle *SpaceShuttleBuilder::getShuttle() const {
    return  spaceShuttle;
}



void SpaceShuttleBuilder::rocketReuse(Rocket* r) {

    if (dynamic_cast<FalconNine*>(r)!=0) {
        if (r->getNumReuses()>=10 && r->getNumReuses()<=0) delete r;
        else    for_reuse.push(r);

    }
    else {
        for (int i=0;i<3; i++) {
            Rocket* fNine=r->removeFalconNine();

            if ((fNine->getNumReuses()>=10 && fNine->getNumReuses()<=0) || r->getNumReuses()<=0) delete fNine;
            else    for_reuse.push(fNine);
        }

        delete r;
    }

    
}

WinningShuttle* SpaceShuttleBuilder::createMemento(WinningShuttle* w) {
    if (w==nullptr)
        return new WinningShuttle(spaceShuttle->clone());


    if (w->getWinningShuttle()->getTotalCost()< spaceShuttle->getTotalCost()) {
        Rocket* r=spaceShuttle->getRocket();
        r->setNumReuses(r->getNumReuses()-1);
        rocketReuse(r);
        delete spaceShuttle->getSpaceCraft();
        delete spaceShuttle;
        this->setMemento(w);

    }
    else {
        Rocket* r=w->getWinningShuttle()->getRocket();
        r->setNumReuses(r->getNumReuses()-1);
        rocketReuse(r);
        delete w->getWinningShuttle()->getSpaceCraft();
        delete w->getWinningShuttle();
    }

    return new WinningShuttle(spaceShuttle->clone());
}

void SpaceShuttleBuilder::setMemento(WinningShuttle* w) {

    spaceShuttle=w->getWinningShuttle()->clone();
}




Rocket* SpaceShuttleBuilder::testRocket(Rocket* r) {
    
    double probability;
    int lowerLimit=0;
    int x, count=0;

    do {
        cout<<"TEST: "<<++count<<endl<<endl;
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