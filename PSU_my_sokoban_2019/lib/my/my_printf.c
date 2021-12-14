/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** printf but mouli friendly
*/

#include <stdarg.h>
#include <stddef.h>
#include "my.h"

int nintendo_switch(char *s, int x, va_list ap)
{
    switch (s[x + 1]) {
    case ('%') :
        my_putchar('%');
        break;
    case ('d') :
    case ('i') :
        my_put_nbr(va_arg(ap, int));
        break;
    case ('c') :
        my_putchar(va_arg(ap, int));
        break;
    case ('u') :
        my_put_unsigned(va_arg(ap, long));
        break;
    case ('n') :
        my_putchar('\n');
        break;
    }
    return (0);
}

int nintendo_switch_lite(char *s, int x, va_list ap)
{
    switch (s[x + 1]) {
    case ('s') :
        my_putstr(va_arg(ap, char*));
        break;
    case ('f') :
        my_put_float(va_arg(ap, double));
        break;
    case ('h') :
        my_put_hexa(va_arg(ap, int));
        break;
    case ('b') :
        my_put_binary(va_arg(ap, int));
        break;
    case ('o') :
        my_put_octal(va_arg(ap, int));
        break;
    }
    return (0);
}

int my_printf(char *s, ...)
{
    va_list ap;
    int x = 0;

    va_start(ap, s);
    while (s[x] != '\0') {
        if (s[x] == '%' && s[x + 1] != ' ') {
            nintendo_switch(s, x, ap);
            nintendo_switch_lite(s, x, ap);
            x = x + 2;
        }
        my_putchar(s[x]);
        x++;
    }
    va_end(ap);
    return (0);
}
