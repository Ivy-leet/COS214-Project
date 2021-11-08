OBJS	= Rocket.o Command.o HaltCommand.o LaunchCommand.o Controller.o main.o
SOURCE	= Rocket.cpp Command.cpp HaltCommand.cpp LaunchCommand.cpp Controller.cpp
HEADER	= Rocket.h Command.h HaltCommand.h LaunchCommand.h Controller.h
OUT	= main
CC	 = g++
FLAGS	 = -g3 -c
LFLAGS	 =

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

Rocket.o: Rocket.cpp
	$(CC) $(FLAGS) Rocket.cpp

Command.o: Command.cpp
	$(CC) $(FLAGS) Command.cpp

HaltCommand.o: HaltCommand.cpp
	$(CC) $(FLAGS) HaltCommand.cpp

LaunchCommand.o: LaunchCommand.cpp
	$(CC) $(FLAGS) LaunchCommand.cpp

Controller.o: Controller.cpp
	$(CC) $(FLAGS) Controller.cpp

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp

clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)

debug: $(OUT)
	valgrind ./$(OUT)

valgrind: $(OUT)
	valgrind ./$(OUT)

valgrind_leakcheck: $(OUT)
	valgrind --leak-check=full ./$(OUT)

valgrind_extreme: $(OUT)
	valgrind --leak-check=full --show-leak-kinds=all --leak-resolution=high --track-origins=yes --vgdb=yes ./$(OUT)
