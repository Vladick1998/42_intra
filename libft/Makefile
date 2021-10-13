
SRC = ft_bzero.c\
	ft_isalnum.c\
	ft_isalpha.c\
	ft_isascii.c\
	ft_isdigit.c\
	ft_isprint.c\
	ft_memcpy.c\
	ft_memset.c\
	ft_strchr.c\
	ft_strlen.c\
	ft_strncmp.c\
	ft_tolower.c\
	ft_toupper.c\
	ft_memmove.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_strlcpy.c\
	ft_strnstr.c

OBJ = ${patsubst %.c,%.o,${SRC}}

D_FILES = ${patsubst %.c,%.d,$(SRC)}

NAME = libft.a
CC = gcc
GFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJ}
	ar rcs ${NAME} $?

%.o: %.c
	${CC} ${GFLAGS} -c $< -o $@ -MD

include ${wildcard ${D_FILES}}


clean:
	rm -f ${OBJ} ${D_FILES}

fclean:	clean
	rm -f ${NAME}

re:	fclean	all

.PHONY:	all clean fclean re
