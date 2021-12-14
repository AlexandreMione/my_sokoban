/*
** EPITECH PROJECT, 2019
** my_putchar
** File description:
** but write 2
*/

#include <unistd.h>

void my_putcharerr(char c)
{
    write(2, &c, 1);
}
