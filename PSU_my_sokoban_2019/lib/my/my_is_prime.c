/*
** EPITECH PROJECT, 2019
** my_is_prime
** File description:
** Day05 Task06
*/

int my_is_prime(int nb)
{
    int x = 2;

    if (nb < 2)
        return (0);
    if (nb == 2)
        return (1);
    while (x != nb - 1) {
        if (nb % x == 0)
            return (0);
        x = x + 1;
    }
    return (1);
}
