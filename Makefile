##
## EPITECH PROJECT, 2018
## Evalexpr
## File description:
## Makefile
##

SRC		=	pushswap.c		\
			add_to_list.c		\
			init_remove_list.c		\
			move.c		\
			check_error.c

OBJ		=	$(SRC:.c=.o)

NAME	=	push_swap

all:	clean fclean $(NAME)

$(NAME):
		(cd ./lib/my/ && make)
		(cd ./lib/my_printf/ && make)
		gcc -o $(NAME) $(SRC) -Llib/my/. -lmy -Llib/my_printf/. -lmy_printf

valgrind:
		(cd ./lib/my/ && make)
		(cd ./lib/my_printf/ && make)
		gcc -o $(NAME) $(SRC) -Llib/my/. -lmy -Llib/my_printf/. -lmy_printf -g3

warning:
		(cd ./lib/my/ && make)
		(cd ./lib/my_printf/ && make)
		gcc -o $(NAME) $(SRC) -Llib/my/. -lmy -Llib/my_printf/. -lmy_printf -Wall -Werror

clean:
		rm -f $(OBJ)

fclean:
		rm -f $(NAME)

re:
		fclean $(NAME)

auteur:
		echo $(USER) > auteur
