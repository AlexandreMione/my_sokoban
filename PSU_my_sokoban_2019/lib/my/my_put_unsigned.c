/*
** EPITECH PROJECT, 2018
** my_put_unasigned
** File description:
** my_put_nbr but unsigned
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int my_putchar(char);

void my_put_unsigned(long nb)
{
    int count = 1;

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
