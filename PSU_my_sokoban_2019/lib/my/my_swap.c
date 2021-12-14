/*
** EPITECH PROJECT, 2018
** my_swap.c
** File description:
** task01
*/

void my_swap(int *a, int *b)
{
    int bin;

    bin = *a;
    *a = *b;
    *b = bin;
}
