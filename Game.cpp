//Game.cpp 
//By J.D. Carthel 2018

#include "ncurses.h"
#include "cursesw.h"
#include "Game.h"
#include "img/title.xpm"
#include "img/faces.xpm"
#include "drawxpm.h"

Game::Game()
{
}
void Game::init(int xpos, int ypos, int wth, int ht)
{
	m_room = 0;
	initscr();
	m_width = wth;
	m_height = ht;
	m_win = newwin(m_height,m_width,ypos,xpos);
	m_menuwin = newwin(5,m_width,25,0);
	keypad(stdscr,TRUE);
	echo();
	curs_set(0);
	start_color();
	init_pair(1,COLOR_BLACK,COLOR_BLACK);
	init_pair(2,COLOR_RED,COLOR_RED);
	init_pair(3,COLOR_GREEN,COLOR_GREEN);
	init_pair(4,COLOR_YELLOW,COLOR_YELLOW);
	init_pair(5,COLOR_BLUE,COLOR_BLUE);
	init_pair(6,COLOR_MAGENTA,COLOR_MAGENTA);
	init_pair(7,COLOR_CYAN,COLOR_CYAN);
	init_pair(8,COLOR_WHITE,COLOR_WHITE);
	init_pair(9,COLOR_WHITE,COLOR_BLACK);
}

Game::~Game()
{
	delwin(m_menuwin);
	delwin(m_win);
	endwin();	
}

void Game::run()
{
	getInput();
	update();
	render();
	getInput();
}

void Game::getInput()
{
	m_ch = getch();	
}

void Game::update()
{
}

void Game::render()
{
	drawxpm(title_xpm,m_win,0,0,0,80,25);
	box(m_win,0,0);
	box(m_menuwin,0,0);
	wrefresh(m_win);
	refresh();
}
void Game::clean()
{
	delwin(m_menuwin);
	delwin(m_win);
	endwin();	
}
