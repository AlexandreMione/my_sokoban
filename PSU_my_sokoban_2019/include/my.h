/*
** EPITECH PROJECT, 2018
** my
** File description:
** task02
*/

#ifndef MY_H
#define MY_H

char *concat_params(int argc, char **argv);
int my_str_islower(char const *str);
int my_char_isalpha(char c);
int my_compute_factorial_it(int nb);
int my_compute_factorial_rec(int nb);
int my_compute_power_it(int nb, int p);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb, int power);
char *my_evil_str(char *str);
int my_find_prime_sup(int nb);
int my_getnbr(char const *str);
int my_isneg(int n);
int my_is_prime(int nb);
int my_print_alpha(void);
int my_print_comb(void);
int my_print_digits(void);
int my_print_revalpha(void);
void my_putchar(char c);
void my_putcharerr(char c);
void my_put_nbr(int nb);
int my_putstr(char const *str);
int my_putstrerr(char const *str);
void my_put_unsigned(long nb);
char *my_revstr(char *str);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
int my_show_word_array(char * const *tab);
void my_sort_int_array(int *tab, int size);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
char *my_strdup(char const *src);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char *my_str_only_alpha(char *str);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
int my_swap(int *a, int *b);
char *upper_case(char *str);
int my_put_float(double nbr);
int my_put_hexa(unsigned int nb);
void my_put_binary(int nb);
void my_put_octal(int nb);
int my_printf(char *s, ...);
int calco(char *buff);
void nc(char *buff);
void game(char *buff, int obj);
void movie(int *score, int key, char *buff);
int kda(char *buff);
void right(char *buff, int *score);
void left(char *buff, int *score);
void down(char *buff, int *score);
void up(char *buff, int *score);

#endif
