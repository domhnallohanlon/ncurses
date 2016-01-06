#include <ncurses.h>

int main(){
	
	initscr(); //creates stdscr
	//raw()
	//cbreak()
	raw();
	printw("Hello World");
	getch(); //wait for keypress to exit
	endwin();
	
	return 0;
}
