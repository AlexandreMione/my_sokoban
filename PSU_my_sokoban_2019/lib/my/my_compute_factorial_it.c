/*
** EPITECH PROJECT, 2018
** my_compute_factorial_it
** File description:
** task01
*/

#include <stdio.h>
#include <unistd.h>

int my_compute_factorial_it(int nb)
{
    int dont;
    int ignore;
    int me;

    if (nb < 0 || nb > 12) {
        me = 0;
        return (me);
    }
    if (nb == 0 || nb == 1) {
        me = 1;
        return (me);
    }
    for (dont = nb; dont > 1; dont = dont - 1) {
        ignore = dont - 1;
        nb = nb * ignore;
    }
    return (nb);
}
