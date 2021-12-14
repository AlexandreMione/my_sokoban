/*
** EPITECH PROJECT, 2018
** my_compute_factorial_rec
** File description:
** task02
*/

#include <stdio.h>
#include <unistd.h>

int my_compute_factorial_rec(int nb)
{
    int a = 1;

    if (nb < 0 || nb > 12) {
        a = 0;
        return (a);
    }
    if (nb == 0 || nb == 1) {
        a = 1;
        return (a);
    }
    a = nb * my_compute_factorial_rec(nb - 1);
    return (a);
}
