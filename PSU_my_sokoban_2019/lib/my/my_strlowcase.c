/*
** EPITECH PROJECT, 2018
** my_strlowcase
** File description:
** task01
*/

char *my_strlowcase(char *str)
{
    int c = 0;

    while (str[c] != '\0') {
        if (str[c] > 64 && str[c] < 91)
            str[c] = str[c] + 32;
        c++;
    }
    return (str);
}
