/*
** EPITECH PROJECT, 2019
** my_upper_case
** File description:
** upper_case
*/

char *upper_case(char *str)
{
    int i = 0;

    while (str[i] != 0) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i = i + 1;
    }
    return (str);
}
