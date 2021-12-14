/*
** EPITECH PROJECT, 2019
** my_find_prime_sup
** File description:
** Day05 Task07
*/

int my_is_prime(int);

int my_find_prime_sup(int nb)
{
    int x = nb;

    while (my_is_prime(x) != 1)
        x++;
    return (x);
}
