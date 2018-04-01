//draw_xpm
//by J.D. Carthel 2018
//This function processes xpm files
//Make sure that the array in the xpm
//file is a static const char *
//and not a static char *

#include <string>
#include <iostream>
#include <sstream>
#include <ncurses.h>
#include "img/title.xpm"
#include "img/faces.xpm"
#include "drawxpm.h"


int drawxpm(const char * xpm[],WINDOW *win, int x, int y,int fr, int width, int height)
{
	int n,w,h,num_clrs,attr;
	std::stringstream val_stream(xpm[0]);
	std::stringstream col_stream(xpm[1]);
	val_stream >> n >> n >> num_clrs;
	char color[num_clrs];
	w = width;
	h = height;
	for(int i = 0; i < num_clrs; i++)
	{
		std::stringstream col_stream(xpm[i+1]);
		col_stream >> std::noskipws >>  color[i];
	}
	std::string str;
	for(int i = 0 + (fr*h); i < h + (fr*h); i++)
	{
		for(int j = 0; j < w; j++)
		{
			str = xpm[num_clrs + 1 + i];
			if(str[j] == color[0])
					attr = 1;
			if(str[j] == color[1])
					attr = 2;
			if(str[j] == color[2])
					attr = 3;
			if(str[j] == color[3])
					attr = 4;
			if(str[j] == color[4])
					attr = 5;
			if(str[j] == color[5])
					attr = 6;
			if(str[j] == color[6])
					attr = 7;
			if(str[j] == color[7])
					attr = 8;
			if(str[j] == color[8])
					attr = 8;
			if(str[j] != color[8]){	
				wattron(win,COLOR_PAIR(attr));		
				mvwprintw(win,i - (fr*h) + y,j + x,"%c",str[j]);
			}
			
			attroff(COLOR_PAIR(attr));
		}
	}
	return 0;
};
