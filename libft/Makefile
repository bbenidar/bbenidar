# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbenidar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 14:46:36 by bbenidar          #+#    #+#              #
#    Updated: 2022/10/09 16:48:05 by bbenidar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC	= gcc
FLAGS = -Wall -Wextra -Werror
SRC = ${wildcard *.c}
OBJ = ${SRC:.c=.o}

all: ${NAME}

${NAME} : ${OBJ}
	@ar rcs ${NAME} ${OBJ}
%.o : %.c
	@${CC} ${FLAGS} -c $<
fclean : clean
	@rm ${NAME}
clean :
	@rm ${OBJ}
