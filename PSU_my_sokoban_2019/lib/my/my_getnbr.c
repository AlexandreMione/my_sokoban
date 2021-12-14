/*
** EPITECH PROJECT, 2018
** my_getnbr
** File description:
** task01
*/

#include <unistd.h>

int my_getnbr(char const *str)
{
    int x = 0;
    int a = 0;

    while (str[x] != '\0') {
        if (str[x] >= '0' && str[x] <= '9')
            a = a * 10 + (str[x] - '0');
        x = x + 1;
    }
    return (a);
}
