/*
** EPITECH PROJECT, 2019
** my_str_only_alpha
** File description:
** convert a string whit alpha num only
*/

#include <stdio.h>

int my_char_isalpha(char c);

char *my_str_only_alpha(char *str)
{
    char *alpha;
    int i;
    int j;

    while (str[i] != '\0') {
        if (my_char_isalpha(str[i]) == 1) {
            alpha[j] = str[i];
            j++;
        }
        i++;
    }
    return (alpha);
}
