# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 14:46:36 by bbenidar          #+#    #+#              #
#    Updated: 2022/11/07 12:38:23 by bbenidar         ###   ########.fr        #
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
		ft_strchr.c	     ft_strjoin.c       \
		ft_strlcat.c     ft_strnstr.c       \
		ft_atoi.c        ft_memcmp.c        \
		ft_calloc.c      ft_memchr.c        \
		ft_strdup.c      ft_toupper.c 		\
        ft_substr.c      ft_tolower.c       \
		ft_strlcpy.c     ft_strrchr.c       \
		ft_strlen.c      ft_strncmp.c       \
		
		
		
SRC_B = ft_lstnew.c  	      		ft_lstlast.c	   \
		ft_lstadd_front.c        	ft_lstadd_back.c   \
		ft_lstsize.c	  			ft_lstdelone.c     \
		ft_lstclear.c 				ft_lstiter.c                        

OBJ = ${SRC:.c=.o}

OBJ_b = ${SRC_B:.c=.o}

%.o : %.c libft.h
	${CC} ${FLAGS} -c $<
	
${NAME} : ${OBJ}
	ar rc ${NAME} ${OBJ} 

all: ${NAME}

bonus: ${OBJ_b}
		ar  rc ${NAME} ${OBJ_b}

fclean : clean
	rm -rf ${NAME}
clean :
	rm -rf ${OBJ} ${OBJ_b}
re	  : fclean all
