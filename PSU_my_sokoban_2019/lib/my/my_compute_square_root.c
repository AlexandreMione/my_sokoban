/*
** EPITECH PROJECT, 2019
** my_square_root
** File description:
** Task05 Day05
*/

int my_compute_square_root(int nb)
{
    int a;

    if (nb < 0 || nb == 0)
        return (0);
    for (a = 0; a * a != nb; a++)
        if (a > nb)
            return (0);
    return (a);
}
