suspense: main.o drawxpm.o Game.o
	g++ main.o drawxpm.o Game.o -o suspense -lncursesw
test: main.o drawxpm.o Game.o
	g++ -g main.o drawxpm.o Game.o -o suspense -lncursesw
drawxpm.o: drawxpm.cpp
	g++ -c drawxpm.cpp
Game.o: Game.cpp
	g++ -c Game.cpp
main.o: main.cpp
	g++ -c main.cpp 
clean:
	rm *.o 
