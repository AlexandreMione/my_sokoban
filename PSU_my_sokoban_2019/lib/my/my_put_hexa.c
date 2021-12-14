/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** task07
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void my_putchar(char);

void my_put_hexa(unsigned int nb)
{
    int	res;

    if (nb >= 16) {
        res = nb % 16;
        nb = nb / 16;
        my_put_hexa(nb);
    }
    else if (nb > 0) {
        res = nb % 16;
        nb = nb / 16;
    }
    if (res > 9)
        my_putchar(res + 87);
    else
        my_putchar(res + 48);
}
