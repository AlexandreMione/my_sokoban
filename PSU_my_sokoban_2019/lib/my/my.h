/*
** EPITECH PROJECT, 2018
** base
** File description:
** header for the base lib
*/

#ifndef BASE_
#define BASE_

typedef struct linked_list
{
    void *data;
    struct linked_list *next;
} linked_list_t;

int my_putstr(char const *);
int my_putstrerr(char const *);
void my_putchar(char);
void my_putcharerr(char);
int my_strlen(char const *);
void my_put_nbr(int);
int my_strcmp(char *, char *);
int my_getnbr(char const *);
void my_put_unsigned(long);
char *upper_case(char *);
char *my_strdup(char *);
char *my_revstr(char *);
char *my_strcat(const char *, const char *);
int my_put_nbr_base(int nb, char *base);
int my_put_nbr_base_long(unsigned long int nb, char *base);
int my_put_float(double nbr);
void my_put_hexa(unsigned int nb);
void my_put_binary(int nb);
void my_put_octal(int nb);
int my_printf(char *s, ...);

#endif
