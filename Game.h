//Game.h 
//by J.D. Carthel 2018
#ifndef GAME_H 
#define GAME_H
#include <ncurses.h>
#include <string>
class Game {
	public:
		Game();
		~Game();
		void clean();
		void init(int xpos, int ypos, int wth, int ht);
		void run();
	private:
		int m_ch;
		int m_room;
		int m_width;
		int m_height;
		int m_score;
		void getInput();
		void update();
		void render();
		bool running; 	
		WINDOW *m_win;
		WINDOW *m_menuwin;
};	

#endif /*GAME_H*/
