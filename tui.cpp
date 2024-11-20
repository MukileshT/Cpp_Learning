#include <ncurses.h>

int main() {
    initscr();            // Start curses mode
    printw("Hello, Termux TUI!");  // Print a message to the window
    refresh();            // Print it on to the real screen
    getch();              // Wait for user input
    endwin();             // End curses mode

    return 0;
}
