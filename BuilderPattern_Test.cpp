#include <gtest/gtest.h>
#include "CrewDragonCreator.h"
#include "FalconHeavy.h"
#include "FalconNine.h"
#include "SpaceX.h"
#include "SpaceShuttleBuilder.h"

TEST(FalconHeavyWeight, ExcessFalconNines) {
    Rocket *heavy = new FalconHeavy;
    for (int i=0;   i<4;    ++i)
        heavy->addFalconNine(new FalconNine);

    ASSERT_EQ(65000,heavy->getWeight());
    delete heavy;
}

TEST(ShuttleRocket, RocketNull) {
    SpaceShuttleBuilder *builder = new SpaceShuttleBuilder;
    SpaceX *spaceX = new SpaceX(builder);
    ASSERT_EQ(nullptr, builder->getShuttle()->getRocket());

    delete builder;
    delete spaceX;
}

TEST(ShuttleRocket, SpaceCraftNull) {
    SpaceShuttleBuilder *builder = new SpaceShuttleBuilder;
    SpaceX *spaceX = new SpaceX(builder);
    ASSERT_EQ(nullptr, builder->getShuttle()->getSpaceCraft());

    delete builder;
    delete spaceX;
}

TEST(FirstState, stage1) {
    SpaceShuttleBuilder *builder = new SpaceShuttleBuilder;
    SpaceX *spaceX = new SpaceX(builder);
    spaceX->construct(0,0,-1);

    SpaceShuttle *sp = builder->getShuttle();
    ASSERT_EQ("Rocket class", sp->getRocket()->getState()->getMessage());
    sp->getRocket()->fire();
    ASSERT_EQ("Stage 1 Request for Fire Received\nStage 1 Fire", sp->getRocket()->getState()->getMessage());

    delete builder;
    delete spaceX;
}

TEST(SecondState, stage2) {
    SpaceShuttleBuilder *builder = new SpaceShuttleBuilder;
    SpaceX *spaceX = new SpaceX(builder);
    spaceX->construct(1,0,-1);

    SpaceShuttle *sp = builder->getShuttle();
    sp->getRocket()->setState(new Stage2("In Stage 2"));
    ASSERT_EQ("In Stage 2", sp->getRocket()->getState()->getMessage());

    sp->getRocket()->detach();
    ASSERT_EQ(nullptr, sp->getRocket()->getState());

    delete builder;
    delete spaceX;
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}