##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## make
##

SRC	=	src/101pong.c	\
		src/main.c	\
		src/rigor.c

SRC_TEST	=	src/101pong.c

OBJ	=	$(SRC:.c=.o)

NAME	=	101pong

UNIT_TEST	=	test_101pong.c


all:	$(NAME)

$(NAME)	:
		gcc $(SRC) -lm -Wall -Wextra -Werror -o $(NAME)

tests_run: Make
	gcc -o test $(SRC_TEST)	\
	./tests/$(UNIT_TEST) --coverage -lcriterion
	./test
clean_all:
	rm -f $(OBJ)
	rm -f $(NAME)
	rm -f test
	rm -f *.gcda
	rm -f *.gcno
	rm -f *~
	rm -f *.o
clean:
		rm -f $(OBJ)
fclean:		clean
		rm -f $(NAME)
re:	fclean all
