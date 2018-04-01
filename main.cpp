//main.cpp
//By J.D. Carthel 2018

#include "Game.h"
#include "cursesw.h"

int main(int argc, char *argv[])
{
	Game g; 
	g.init(0,0,80,25);
	g.run();
	g.clean();
	return 0;
}

