/*
** EPITECH PROJECT, 2019
** my_print_revalpha
** File description:
** Task02 Day03
*/

int my_putchar(char);

int my_print_revalpha(void)
{
    char x = 122;

    while (x >= 97) {
        my_putchar(x);
        x = x - 1;
    }
}
