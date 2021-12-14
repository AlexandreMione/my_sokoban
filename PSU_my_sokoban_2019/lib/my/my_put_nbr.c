/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** task07
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int my_putchar(char);

void my_put_nbr(int nb)
{
    int count = 1;

    if (nb == 0)
        my_putchar('0');
    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    while (count <= nb) {
        count = count * 10;
    }
    count = count / 10;
    while (count >= 1) {
        my_putchar((nb / count) + '0');
        nb = nb % count;
        count = count / 10;
    }
}
