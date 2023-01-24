NAME = libft.a
CFILES = ft_atoi.c \
		 ft_bzero.c \
		 ft_calloc.c \
		 ft_isalnum.c \
		 ft_isalpha.c \
		 ft_isascii.c \
		 ft_isdigit.c \
		 ft_isprint.c \
		 ft_memchr.c \
		 ft_memcmp.c \
		 ft_memcpy.c \
		 ft_memmove.c \
		 ft_memset.c \
		 ft_putchar_fd.c \
		 ft_putstr_fd.c \
		 ft_strchr.c \
		 ft_strdup.c \
		 ft_strjoin.c \
		 ft_strlcat.c \
		 ft_strlcpy.c \
		 ft_strlen.c \
		 ft_strmapi.c \
		 ft_strncmp.c \
		 ft_strnstr.c \
		 ft_strrchr.c \
		 ft_strtrim.c \
		 ft_substr.c \
		 ft_tolower.c \
		 ft_toupper.c \
		 ft_itoa.c \
		 ft_putendl_fd.c \
		 ft_putnbr_fd.c \
		 ft_split.c \
		 ft_striteri.c
OBJ = ${CFILES:.c=.o}
FLAG = -Wall -Werror -Wextra 
CC = gcc
LI = ar rc
RM = rm -rf
HEAD = libft.h

all : ${NAME}

${NAME} : ${OBJ}
	${LI} ${NAME} ${OBJ}

${OBJ} : 
	${CC} ${FLAG} -c  ${CFILES} ${libft.h}

clean :
	${RM} ${OBJ}

fclean : clean
	${RM} ${NAME}

re : fclean all