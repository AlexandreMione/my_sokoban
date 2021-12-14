/*
** EPITECH PROJECT, 2019
** my_print_comb
** File description:
** Task05 Day03
*/

#include <unistd.h>

int my_putchar(char);

void display(int x, int y, int z)
{
    if (x == 55 && y == 56 && z == 57) {
        my_putchar(x);
        my_putchar(y);
        my_putchar(z);
    }
    else {
        my_putchar(x);
        my_putchar(y);
        my_putchar(z);
        my_putchar(',');
        my_putchar(' ');
    }
}

int my_print_comb(void)
{
    int x;
    int y;
    int z;

    for (x = 47; x <= 55; y = x + 1) {
        while (y <= 56) {
            z = y + 1;
            while (z <= 57) {
                display(x, y, z);
                z = z + 1;
            }
            y = y + 1;
        }
        x = x + 1;
    }
}
