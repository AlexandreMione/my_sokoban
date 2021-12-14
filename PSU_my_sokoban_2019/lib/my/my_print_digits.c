/*
** EPITECH PROJECT, 2019
** my_print_digits
** File description:
** Task03 Day03
*/

int my_putchar(char);

int my_print_digits(void)
{
    char x = 48;

    while (x <= 57) {
        my_putchar(x);
        x = x + 1;
    }
}
