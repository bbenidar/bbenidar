# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 14:46:36 by bbenidar          #+#    #+#              #
#    Updated: 2022/10/10 18:59:47 by bbenidar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC	= gcc
FLAGS = -Wall -Wextra -Werror
SRC =   ft_bzero.c    \
		ft_isalnum.c  \
		ft_isalpha.c  \
		ft_isascii.c  \
		ft_isdigit.c  \
		ft_isprint.c  \
		ft_memcpy.c   \
		ft_memmove.c  \
		ft_memset.c   \
		ft_strchr.c   \
		ft_strlcat.c  \
		ft_strlcpy.c  \
		ft_strlen.c   \
		ft_strncmp.c  \
		ft_strrchr.c  \
		ft_tolower.c  \
		ft_toupper.c  \
		ft_memccpy.c  \
		ft_memchr.c   \
		ft_memcmp.c  \
		
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
