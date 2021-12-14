/*
** EPITECH PROJECT, 2019
** movement 
** File description:
** sokoban
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ncurses.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "include/my.h"

int kda(char *buff)
{
    int cara;

    while(buff[cara] != '\n')
        cara = cara + 1;
    return cara;
}

void right(char *buff, int *score)
{
    int x;
    char a;

    while (buff[x] != 'P')
        x++;
    if (buff[x + 1] == '#') {
    } else if (buff[x + 1] == 'X' && buff[x + 2] == ' ') {
        a = buff[x + 2];
        buff[x + 2] = buff[x + 1];
        buff[x + 1] = a;
    } else if (buff[x + 1] == 'X' && buff[x + 2] == 'O') {
        buff[x + 2] = buff[x + 1];
        buff[x + 1] = buff[x - 1];
        *score = *score + 1;
    } else {
        a = buff[x + 1];
        buff[x + 1] = buff[x];
        buff[x] = a;
    }
}


void left(char *buff, int *score)
{
    int	x;
    char a;

    while (buff[x] != 'P')
        x++;
    if (buff[x - 1] == '#') {
    } else if (buff[x - 1] == 'X' && buff[x - 2] == ' ') {
        a = buff[x - 2];
        buff[x - 2] = buff[x - 1];
        buff[x - 1] = a;
    } else if (buff[x - 1] == 'X' && buff[x - 2] == 'O') {
        buff[x - 2] = buff[x - 1];
        buff[x - 1] = buff[x + 1];
        *score = *score	+ 1;
    } else {
        a = buff[x - 1];
        buff[x - 1] = buff[x];
        buff[x] = a;
    }
}

void down(char *buff, int *score)
{
    int x;
    int y;
    char a;

    while (buff[x] != 'P')
        x++;
    y = kda(buff);
    if (buff[y + x + 1] == '#') {
    } else if (buff[y + x + 1] == 'X' && buff[y + x + 2] == ' ') {
        a = buff[y + x + 2];
        buff[y + x + 2] = buff[y + x + 1];
        buff[y + x + 1] = a;
    } else if (buff[y + x + 1] == 'X' && buff[y + x + 2] == 'O') {
        buff[y + x + 2] = buff[y + x + 1];
        buff[x + y + 1] = ' ';
        *score = *score + 1;
    } else {
        a = buff[x];
        buff[x] = buff[y + x + 1];
        buff[y + 1 + x] = a;
    }
}

void up(char *buff, int *score)
{
    int x;
    int y;
    char a;

    while (buff[x] != 'P')
        x++;
    y = kda(buff);
    if (buff[x - y - 1] == '#') {
    } else if (buff[x - y - 1] == 'X' && buff[x - y - 1] == ' ') {
        a = buff[x - y - 2];
        buff[x - y - 2] = buff[x - y - 1];
	buff[x - y - 1] = a;
    } else if (buff[x - y - 1] == 'X' && buff[x - y - 2] == 'O') {
        buff[x - y - 2] = buff[x - y - 1];
        buff[x - y - 1] = ' ';
	*score = *score + 1;
    } else {
        a = buff[x];
        buff[x] = buff[x - y - 1];
        buff[x - y - 1] = a;
    }
}
