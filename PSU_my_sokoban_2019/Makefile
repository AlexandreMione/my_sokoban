##
## EPITECH PROJECT, 2018
## Print_f
## File description:
## makefile
##

SRCM	=	main.c	\
		move.c

OBJM	=	$(SRCM:.c=.o)

LIB_HEADER	=	include/my.h

LIB_PATH	=	lib/my

LIB_NAME	=	my

LIB	=	lib/my/libmy.a

CFLAGS	=   -L $(LIB_PATH) -l $(LIB_NAME) -I -Wall -Wextra -W

NAME	=	my_sokoban

.PHONY: clean fclean re

all:    $(NAME)

$(NAME):    $(LIB) $(LIB_HEADER) $(OBJM)
	gcc -g -o $(NAME) $(OBJM) $(CFLAGS) -lncurses

$(LIB):
	cd lib/my && $(MAKE)

$(HEADER):
	cd lib/my && $(MAKE) header

clean:
	rm -f $(OBJM)
	rm -f */*.gc*
	rm -f *~
	make clean -C ./lib/my/

fclean: clean
	rm -f $(NAME)
	rm -f *~
	rm -f */*.gc
	make fclean -C ./lib/my/

thanos: clean
	rm -f $(NAME)
	rm -f *~
	rm -f */*.gc
	make fclean -C ./lib/my	

re:	fclean all

r:	fclean all
