/*
** EPITECH PROJECT, 2018
** my_compute_power_it
** File description:
** task03
*/
#include <unistd.h>
#include <stdio.h>

int my_compute_power_it(int nb, int p)
{
    int x;

    x = nb;
    if (p < 0) {
        x = 0;
    }
    if (p == 0) {
        x = 1;
    }
    while (p > 1) {
        x = nb * x;
        p = p - 1;
    }
    return (x);
}
