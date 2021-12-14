/*
** EPITECH PROJECT, 2019
** my_print_alpha
** File description:
** Task01_Day03
*/

int my_putchar(char);

int my_print_alpha(void)
{
    char x = 97;

    while (x <= 122) {
        my_putchar(x);
        x = x + 1;
    }
}
