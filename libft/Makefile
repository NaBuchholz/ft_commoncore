# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/11 09:23:03 by nbuchhol          #+#    #+#              #
#    Updated: 2024/10/14 14:52:28 by nbuchhol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_strlen.c \
	  ft_tolower.c \
	  ft_toupper.c \
	  ft_strlcpy.c
OBJ = ${SRC:.c=.o}
TEST = test
RM = rm -f

all: ${NAME}.a

${NAME}.a: ${OBJ}
	ar rcs ${NAME}.a ${OBJ}

%.o: %.c
	@${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}.a ${TEST}

re: fclean all

${TEST}: re all main.c
	@${CC} ${CFLAGS} main.c -I ${NAME}.h -L . -lft -o ${TEST}
	./${TEST}

.PHONY =  all clean fclean re
