/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** but write 2
*/

int my_putcharerr(char);

int my_putstrerr(char const *str)
{
    int x = 0;

    while (str[x] != '\0') {
        my_putcharerr(str[x]);
        x = x + 1;
    }
}
