##
## EPITECH PROJECT, 2018
## Print_f
## File description:
## makefile
##

SRC =	concat_params.c \
        islower.c   \
	    my_char_isalpha.c	\
        my_compute_factorial_it.c   \
        my_compute_factorial_rec.c  \
        my_compute_power_it.c   \
        my_compute_power_rec.c  \
        my_compute_square_root.c    \
        my_evil_str.c   \
        my_find_prime_sup.c \
        my_getnbr.c \
        my_isneg.c  \
        my_is_prime.c   \
        my_print_alpha.c    \
        my_printf.c \
        my_print_comb.c \
        my_print_digits.c   \
        my_print_revalpha.c \
        my_strncmp.c    \
        my_putchar.c    \
        my_putcharerr.c \
        my_put_nbr.c    \
        my_put_float.c  \
        my_putstr.c \
        my_putstrerr.c  \
        my_put_unsigned.c   \
        my_revstr.c \
        my_put_binary.c \
        my_put_octal.c  \
        my_put_hexa.c   \
        my_showmem.c    \
        my_showstr.c    \
        my_show_word_array.c    \
        my_sort_int_array.c \
        my_strcapitalize.c  \
        my_strcat.c \
        my_strcmp.c \
        my_strcpy.c \
        my_strdup.c   \
        my_str_isalpha.c    \
        my_str_isnum.c  \
        my_str_isprintable.c    \
        my_str_isupper.c    \
	    my_str_only_alpha.c	\
        my_strlen.c \
        my_strlowcase.c \
        my_strncat.c    \
        my_strcmp.c \
        my_strncpy.c    \
        my_strstr.c \
        my_strupcase.c  \
        my_swap.c   \
        my_upper_case.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)	
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	rm -f *~

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re
