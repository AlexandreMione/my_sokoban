/*
** EPITECH PROJECT, 2019
** my_char_isalpha.c
** File description:
** verify if a char is alphanumeric
*/

int my_char_isalpha(char c)
{
    if (c > 64 && c < 91 || c > 96 && c < 123)
        return (1);
    else
        return (0);
}
