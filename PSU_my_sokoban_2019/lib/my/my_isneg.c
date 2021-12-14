/*
** EPITECH PROJECT, 2019
** my_isneg
** File description:
** task04 Day03
*/

#include <unistd.h>

int my_putchar(char);

int my_isneg(int n)
{
    if (n < 0)
        my_putchar('N');
    else
        my_putchar('P');
}
