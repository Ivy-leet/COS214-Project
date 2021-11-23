project:	*.o
			g++ -o project *.o

*.o:		*.cpp
			g++ -c -g *.cpp

run:
			./project

clean:
			rm *.o project

valgrind: project
	valgrind ./project

valgrind_leakcheck: project
	valgrind --leak-check=full ./project

valgrind_extreme: project
	valgrind --leak-check=full --show-leak-kinds=all --leak-resolution=high --track-origins=yes --vgdb=yes ./project