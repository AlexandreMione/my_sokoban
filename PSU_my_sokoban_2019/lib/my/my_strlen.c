/*
** EPITECH PROJECT, 2018
** my_strlen
** File description:
** task03
*/

int my_strlen(char const *str)
{
    int x = 0;

    while (str[x] != '\0') {
        x = x + 1;
    }
    return (x);
}
