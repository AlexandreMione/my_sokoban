/*
** EPITECH PROJECT, 2019
** my_put_binary
** File description:
** my_put_nbr but for binaries
*/

#include "my.h"

void my_put_octal(int nb)
{
    int	x;

    if (nb >= 8) {
        x = nb % 8;
        nb = nb / 8;
        my_put_octal(nb);
    }
    else if (nb > 0) {
        x = nb % 8;
        nb = nb / 8;
    }
    my_putchar(x + 48);
}
