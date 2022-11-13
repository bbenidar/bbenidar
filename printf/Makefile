# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 10:56:26 by bbenidar          #+#    #+#              #
#    Updated: 2022/11/11 16:24:23 by bbenidar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
FLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c   ft_print_hex.c  ft_itoa.c  ft_print_ptr.c  ft_print_nbr.c

OBJ = ${SRC:.c=.o}

%.o : %.c ft_printf.h
	${CC} ${FLAGS} -c $<

${NAME} : ${OBJ}
	ar -rc ${NAME} ${OBJ}

all : ${NAME}

fclean : clean
	rm -rf ${NAME}

clean : 
	rm -rf ${OBJ}

re : fclean all