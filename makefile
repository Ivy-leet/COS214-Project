project:	*.o
			g++ -o project *.o

*.o:		*.cpp
			g++ -c -g *.cpp

run:
			./project

clean:
			rm *.o project