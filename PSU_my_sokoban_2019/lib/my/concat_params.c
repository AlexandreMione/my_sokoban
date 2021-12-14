/*
** EPITECH PROJECT, 2019
** concat_params
** File description:
** Day08 Task02
*/

#include <stdlib.h>
#include <unistd.h>

char *concat_params(int argc, char **argv)
{
    int x;
    int y;
    int z;
    char *res = malloc(sizeof(char) * (argc + 1));

    for (x = 0; x < argc; x++) {
        for (y = 0; argv[x][y] != '\0'; y++) {
            res[z] = argv[x][y];
            z++;
        }
        if (x < argc - 1)
            res[z] = '\n';
        z++;
    }
    res[z - 1] = '\0';
    return (res);
}
