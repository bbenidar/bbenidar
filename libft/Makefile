# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 14:46:36 by bbenidar          #+#    #+#              #
#    Updated: 2022/10/21 10:44:08 by bbenidar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC	= gcc
FLAGS = -Wall -Wextra -Werror
SRC =   ft_bzero.c    	 ft_strtrim.c		\
		ft_isalnum.c  	 ft_split.c			\
		ft_isalpha.c  	 ft_itoa.c 			\
		ft_isascii.c 	 ft_striteri.c		\
		ft_isdigit.c  	 ft_strmapi.c		\
		ft_isprint.c 	 ft_putchar_fd.c	\
		ft_memcpy.c  	 ft_putstr_fd.c		\
		ft_memmove.c 	 ft_putendl_fd.c	\
		ft_memset.c		 ft_putnbr_fd.c		\
		ft_strchr.c   \
		ft_strlcat.c  \
		ft_strlcpy.c  \
		ft_strlen.c   \
		ft_strncmp.c  \
		ft_strrchr.c  \
		ft_tolower.c  \
		ft_toupper.c  \
		ft_memchr.c   \
		ft_memcmp.c   \
		ft_strnstr.c  \
		ft_atoi.c     \
		ft_calloc.c  \
		ft_strdup.c  \
		ft_substr.c   	ft_strjoin.c 	 \
		
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
