# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 10:56:26 by bbenidar          #+#    #+#              #
#    Updated: 2022/11/08 11:16:10 by bbenidar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
FLAGS = -wall -Wextra -Werror

SRC = {}

OBG = ${SRC :.c=.o}

%.o : %.c ft_printf.h
	${CC} ${FLAGS} -c $<

${NAME} : ${OBG}
	ar -rc ${NAME} ${OBG}

all : ${NAME}

fclean : clean
	rm -rf ${NAME}

clean : 
	rm -rf ${OBG}

re : fclean all