#include <ncurses.h>

int main(){
	
	//start ncurses screen
	initscr();
	raw();
	
	attron(A_STANDOUT | A_UNDERLINE);
	mvprintw(12, 12, "What's the craic?");
	attroff(A_STANDOUT | A_UNDERLINE);
	
	//exit on keypress
	getch();
	endwin();
	
	return 0;
}
