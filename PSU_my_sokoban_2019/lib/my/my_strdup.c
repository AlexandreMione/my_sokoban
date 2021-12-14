/*
** EPITECH PROJECT, 2018
** my_strdup
** File description:
** task01
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *my_strdup(char const *src)
{
    int a = 0;
    int b = 0;
    char *put;

    while (src[a] != '\0') {
        a = a + 1;
    }
    put = malloc(sizeof(char) * (a));
    while (src[b] != '\0') {
        put[b] = src[b];
        b = b + 1;
    }
    return (put);
}
