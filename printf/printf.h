/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:30:00 by bbenidar          #+#    #+#             */
/*   Updated: 2022/11/10 16:23:54 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
/*-------------------headers---------------------*/
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
/*----------------FONCTION PROTOTYPE-------------*/
int    ft_putchar(char c);
void	ft_put_hex(unsigned int num, const char format);
int	ft_hex_len(unsigned	int num);
int	ft_print_hex(unsigned int num, const char format);
void	ft_putstr(char *str);
int    ft_printnbr(int n);
int     ft_printf(const char *str, ...);
char	*ft_itoa(int n);
int    ft_printstr(char *s);

#endif