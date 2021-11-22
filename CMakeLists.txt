cmake_minimum_required(VERSION 3.16)

project(Google_Test)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(builderTest
                BuilderPattern_Test.cpp
                Command.cpp Command.h
                Controller.cpp  Controller.h
                CrewDragon.cpp  CrewDragon.h
                CrewDragonCreator.cpp   CrewDragonCreator.h
                Dragon.cpp  Dragon.h
                DragonCreator.cpp   DragonCreator.h
                FalconHeavy.cpp     FalconHeavy.h
                FalconNine.cpp      FalconNine.h
                HaltCommand.cpp     HaltCommand.h
                LaunchCommand.cpp   LaunchCommand.h
                Rocket.cpp          Rocket.h
                ShuttleBuilder.h
                ShuttleState.cpp    ShuttleState.h
                SpaceCraft.cpp      SpaceCraft.h
                SpaceCraftCreator.h
                SpaceShuttle.cpp    SpaceShuttle.h
                SpaceShuttleBuilder.cpp SpaceShuttleBuilder.h
                SpaceX.cpp          SpaceX.h
                Stage1.cpp          Stage1.h
                Stage2.cpp          Stage2.h
                Starlink.cpp        Starlink.h
                State.cpp           State.h
                WinningConfig.cpp   WinningConfig.h
                WinningShuttle.cpp  WinningShuttle.h)

target_link_libraries(builderTest ${GTEST_LIBRARIES} pthread)