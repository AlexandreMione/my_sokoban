/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** my_revstr
*/

int my_strlen(char const *);

char *my_revstr(char *str)
{
    int	i;
    int len;
    char c;

    len = my_strlen(str);
    i = 0;
    while (i < len / 2)
    {
        c = *(str + i);
        *(str + i) = *(str + len - i - 1);
        *(str + len - i - 1) = c;
        ++i;
    }
    return (str);
}
