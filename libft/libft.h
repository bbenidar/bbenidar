/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:22:47 by bbenidar          #+#    #+#             */
/*   Updated: 2022/10/21 10:42:56 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
//----------------------------------HEADERS------------------------------//
# include <unistd.h>
# include <stdlib.h> //using in malloc and size_t
# include <unistd.h>

//----------------------- FONCTION PROTOTYPE-------------------------------//
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
void			ft_bzero(void *s, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit( int c);
int				ft_isprint(int c);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memset(void *b, int c, size_t len);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
size_t			ft_strlen(const char *str);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strchr(const char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
char			*ft_strnstr(const char *haystack, const char *needle,
					size_t len);
int				ft_atoi(const char *str);
char			*ft_strdup(const char *s1);
void			*ft_calloc(size_t count, size_t size);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_substr(char const *s, unsigned int start,
					size_t len);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
void			ft_striteri(char *s, void (*f)(unsigned int,char*));
char 			*ft_strmapi(char const *s, char (*f)(unsigned
				int, char));
void			ft_putchar_fd(char c, int fd);
void 			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
#endif
