#include <ncurses.h>

int main(){
	
	//start ncurses screen
	initscr();
	raw();
	
	//enables colours
	start_color();
	
	//init_pair(pair_id, foreground, background);
	init_pair(1, COLOR_MAGENTA, COLOR_CYAN);
	
	//use color pair as usual
	attron(A_STANDOUT | COLOR_PAIR(1));
	mvprintw(3,3,"Top of the morning to you");
	attroff(A_STANDOUT | COLOR_PAIR(1));
	
	//exit on keypress
	getch();
	endwin();
	
	return 0;
}
