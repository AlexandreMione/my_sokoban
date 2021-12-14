/*
** EPITECH PROJECT, 2019
** my_show_word_array
** File description:
** Day08 Task03
*/

#include <stddef.h>

void my_putchar(char);

int my_putstr(char const *);

int my_show_word_array(char * const *tab)
{
    for (int x = 0; tab[x] != NULL; x++) {
        my_putstr(tab[x]);
        my_putchar('\n');
    }
    return (0);
}
