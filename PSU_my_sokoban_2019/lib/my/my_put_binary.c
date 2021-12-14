/*
** EPITECH PROJECT, 2019
** my_put_binary
** File description:
** my_put_nbr but for binaries
*/

#include "my.h"

void my_put_binary(int nb)
{
    int	x;

    if (nb >= 2) {
        x = nb % 2;
        nb = nb / 2;
        my_put_binary(nb);
    }
    else if (nb > 0) {
        x = nb % 2;
        nb = nb / 2;
    }
    my_putchar(x + 48);
}
