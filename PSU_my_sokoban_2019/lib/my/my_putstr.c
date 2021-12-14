/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** task02
*/

int my_putchar(char);

int my_putstr(char const *str)
{
    int x = 0;

    while (str[x] != '\0') {
        my_putchar(str[x]);
        x = x + 1;
    }
}
