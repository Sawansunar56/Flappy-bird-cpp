#include "game.hpp"
#include <curses.h>
#include <iostream>

using namespace std;

int main() {
  WINDOW *win;
  initscr();
  cbreak();
  keypad(stdscr, TRUE);

  int maxy, maxx;
  getmaxyx(stdscr, maxy, maxx);

  printw("Hello World");
  int height = 28;
  int width = 120;

  win = newwin(height, width, (maxy / 2) - 14, (maxx / 2) - 60);
  box(win, 0, 0);

  refresh();
  game(win);
  wrefresh(win);

  getch();

  endwin();
  return 0;
}
