/*
** EPITECH PROJECT, 2019
** my_put_float
** File description:
** float for the flag
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int my_putchar(char);
int my_strlen(char const *);

int my_put_nbr_base(int nb, char *base)
{
    int result;
    int x;

    if (nb < 0)
    {
        my_putchar('-');
        nb = -nb;
    }
    result = nb / my_strlen(base);
    x = nb % my_strlen(base);
    if (result > 0)
        my_put_nbr_base(result, base);
    my_putchar(base[x]);
    return (0);
}

int my_put_nbr_base_long(unsigned long int nb, char *base)
{
    unsigned long int start;
    unsigned long int end;
    unsigned long int x;

    x = my_strlen(base);
    end = nb % x;
    start = (nb - end) / x;
    if (start != 0)
    {
        my_put_nbr_base(start, base);
    }
    my_putchar(base[end]);
    return (0);
}

int my_put_float(double nbr)
{
    long dec;
    long ent;
    double aff_dec;
    int x;

    x = 0;
    ent = nbr;
    dec = nbr * (float)1000000;
    dec -= ent * 1000000;
    aff_dec = (double)dec;
    x += my_put_nbr_base_long(ent, "0123456789");
    x += my_putchar('.');
    x += my_put_nbr_base_long((long)aff_dec, "0123456789");
    return (x);
}
