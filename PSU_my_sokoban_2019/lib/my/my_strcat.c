/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** 2 strings in 1
*/

#include <stdio.h>

int my_strlen(char const *);

char *my_strcat(char *dest, const char *src)
{
    int lon = my_strlen(dest);
    int x = 0;

    while (src[x] != '\0') {
        dest[lon + x] = src[x];
        x++;
    }
    dest[lon + x] = '\0';
    return (dest);
}
