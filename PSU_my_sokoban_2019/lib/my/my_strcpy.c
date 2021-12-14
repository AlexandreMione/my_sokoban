/*
** EPITECH PROJECT, 2018
** my_strcpy
** File description:
** task01
*/

char *my_strcpy(char *dest, char const *src)
{
    int i;

    while (src[i])
        dest[i] = src[i++];
    dest[i] = '\0';
    return (dest);
}
