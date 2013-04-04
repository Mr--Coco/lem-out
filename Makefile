##
## Makefile for make in /home/benzah_m//svn/git@github.com:1475963/lem-out.git
## 
## Made by marc benzahra
## Login   <benzah_m@epitech.net>
## 
## Started on  Thu Apr  4 13:16:21 2013 marc benzahra
## Last update Thu Apr  4 13:57:30 2013 marc benzahra
##

SRC	=	main.c			\
		common/exit_error.c	\
		common/exit_write.c	\
		common/my_putchar.c	\
		common/my_voidputstr.c	\

OBJ	=	$(SRC:.c=.o)

CC	=	cc

RM	=	rm -f

NAME	=	lem_in

RESET=		\033[0m
BIG=		\033[1;01m
UNDERLINE=	\033[1;04m
BLINGBLING=	\033[1;05m
VIDEO=		\033[1;07m
C_BLACK=	\033[1;30m
C_RED=		\033[1;31m
C_GREEN=	\033[1;32m
C_ORANGE=	\033[1;33m
C_BLUE=		\033[1;34m
C_PINK=		\033[1;35m
C_GAYBLUE=	\033[1;36m
C_WHITE=	\033[1;37m
B_BLACK=	\033[1;40m
B_RED=		\033[1;41m
B_GREEN=	\033[1;42m
B_ORANGE=	\033[1;43m
B_BLUE=		\033[1;44m
B_PINK=		\033[1;45m
B_GAYBLUE=	\033[1;46m
B_WHITE=	\033[1;47m

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re