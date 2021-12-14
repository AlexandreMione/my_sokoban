/*
** EPITECH PROJECT, 2019
** sokoban
** File description:
** japanese game
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ncurses.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "include/my.h"

int calco(char *buff)
{
    int x = 0;
    int res = 0;

    while (buff[x] != '\0') {
        if (buff[x] == 'O') {
            res = res + 1;
        }
        x++;
    }
    return (res);
}

void game(char *buff, int obj)
{
    int scare = 0;
    int x;
    int y;
    int key;
    int score_size = 3;

    initscr();
    getmaxyx(stdscr, y, x);
    WINDOW *win = newwin(y,x,0,0);
    WINDOW *score = newwin(score_size,x,y - score_size,0);
    keypad(win, TRUE);
    while (1) {
        mvwprintw(score, 0, 0, "Score: %i", scare);
        mvwprintw(win, 0, 0, buff);
        wrefresh(win);
        wrefresh(score);
        key = wgetch(win);
        printw(buff);
        clear();
        movie(&scare, key, buff);
        if (scare == obj)
            break;
    }
    clear();
    endwin();
}

void movie(int *score, int key, char *buff)
{
    int x = 0;

    if (key == KEY_RIGHT)
        right(buff, score);
    else if (key == KEY_LEFT)
        left(buff, score);
    else if (key == KEY_DOWN)
        down(buff, score);
    else if (key == KEY_UP)
        up(buff, score);
}

int main(int ac, char **av)
{
    int fd;
    int size;
    char buff[1000];
    int objv;

    if (ac < 2) {
        my_printf("Need a Map to play\n");
        return (84);
    }
    fd = open(av[1], O_RDONLY);
    if (fd == -1) {
        my_printf("Need a valid map to play\n");
        return (84);
    }
    size = read(fd, &buff, 1000);
    objv = calco(buff);
    game(buff, objv);
    return (0);
}
