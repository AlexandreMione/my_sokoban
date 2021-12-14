/*
** EPITECH PROJECT, 2018
** my_evil_str
** File description:
** reverse a string
*/

int my_strlen(char const *);

char *my_evil_str(char *str)
{
    char bin;
    int x = 0;
    int y = my_strlen(str) - 1;

    while (x < y) {
        bin = str[x];
        str[x] = str[y];
        str[y] = bin;
        x++;
        y--;
    }
    return (str);
}
