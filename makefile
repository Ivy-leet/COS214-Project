OBJS	= State.o Stage1.o Stage2.o Rocket.o main.o
SOURCE	= State.cpp Stage1.cpp Stage2.cpp Rocket.cpp
HEADER	= State.h Stage1.h Stage2.h Rocket.h
OUT	= main
CC	 = g++
FLAGS	 = -g3 -c
LFLAGS	 =

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

State.o: State.cpp
	$(CC) $(FLAGS) State.cpp

Stage1.o: Stage1.cpp
	$(CC) $(FLAGS) Stage1.cpp

Stage2.o: Stage2.cpp
	$(CC) $(FLAGS) Stage2.cpp

Rocket.o: Rocket.cpp
	$(CC) $(FLAGS) Rocket.cpp

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
