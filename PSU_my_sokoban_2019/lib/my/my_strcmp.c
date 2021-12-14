/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** my_strcmp
*/

int my_strcmp(char *str, char *str2)
{
    int i = 0;

    while (str2[i] != '\0') {
        if (str2[i] == str[i])
            i++;
        else
            return (0);
        if (str[i] == '\0')
            return (0);
    }
    return (1);
}
