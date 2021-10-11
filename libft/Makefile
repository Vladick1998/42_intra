
SRCDIR = src/
SRC = ${SRCDIR}ft_bzero.c\
	${SRCDIR}ft_isalnum.c\
	${SRCDIR}ft_isalpha.c\
	${SRCDIR}ft_isascii.c\
	${SRCDIR}ft_isdigit.c\
	${SRCDIR}ft_isprint.c\
	${SRCDIR}ft_memcpy.c\
	${SRCDIR}ft_memset.c\
	${SRCDIR}ft_strchr.c\
	${SRCDIR}ft_strlen.c\
	${SRCDIR}ft_strncmp.c\
	${SRCDIR}ft_tolower.c\
	${SRCDIR}ft_toupper.c

OBJS	=	${SRCS:.c=.o}

NAME = libft
CC = gcc
GFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $<

all:	${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${SRC}

${NAME}:	${OBJS}

clean:
	rm -f ${OBJS}

fclean:	clean
	rm -f ${NAME}

re:	fclean	all

.PHONY:	all clean fclean re
