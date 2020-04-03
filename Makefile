##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## A Makefile to create libmy.a
##

CFLAGS	+=	-Wall -Wextra -I./include

NAME	=	libmy.a

SRC	=	src/my_is_digit.c\
		src/my_is_int.c\
		src/my_is_float.c\
		src/my_strlen.c\
		src/my_strcmp.c\
		src/my_strncmp.c\
		src/my_put_nbr.c\
		src/my_put_str.c\
		src/my_print_word_array.c\
		src/my_strcpy.c\
		src/my_strncpy.c\
		src/my_strcat.c\
		src/my_strncat.c\
		src/my_rev_str.c\
		src/my_get_nbr.c

OBJ	=	$(SRC:.c=.o)

NAME_TESTS = 	tests_libmy

SRC_TESTS	=	tests/tests_my_is_digit.c\
				tests/tests_my_is_int.c\
				tests/tests_my_is_float.c

all:	$(NAME)

$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)
		rm -f $(NAME_TESTS)
		rm -f *.gcno
		rm -f *.gcda

re:	fclean all

tests_run: 	$(SRC)
			rm -f *.gcno
			rm -f *.gcda
			gcc -o $(NAME_TESTS) $(SRC) $(SRC_TESTS) $(CFLAGS) \
			--coverage -lcriterion
			./$(NAME_TESTS)
			gcovr --exclude tests/