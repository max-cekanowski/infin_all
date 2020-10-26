##
## EPITECH PROJECT, 2020
## makefile
## File description:
## build lib
##

SRC		=	infin_add.c	

OBJ 	= 	$(SRC:.c=.o)

GCC		=	gcc

NAME	=	infin_add

CFLAGS	+=	-g -Wextra -I./include

LDFLAGS	=	-L./lib/my -lmy

all:	$(NAME) 


$(NAME):	$(OBJ)
	$(MAKE) -C ./lib/my
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	rm -f $(OBJ)
	rm -f *~

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re