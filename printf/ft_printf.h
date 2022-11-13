/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:22:46 by bbenidar          #+#    #+#             */
/*   Updated: 2022/11/12 15:26:17 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
/*-------------------headers---------------------*/
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
/*----------------FONCTION PROTOTYPE-------------*/

//-------prt_hex------------//
int		ft_print_hex(unsigned int num, const char format);
void	ft_put_hex(unsigned int num, const char format);
int		ft_hex_len(unsigned	int num);
//---------------prt_nbr----------------//
int		ft_printuns(unsigned int n);
char	*ft_itoa_uns(unsigned int n);
int		ft_intlen_uns(unsigned int n);
void	ft_putstr(char *str);
int		ft_putchar(char c);
//----------------prt_ptr-------------------//
int		ft_print_ptr(char *s);
int		ft_print_ptr2(unsigned long long num);
void	ft_put_ptr(unsigned long long num);
int		ft_ptr_len(unsigned long long num);
//------------printf-------------//
int		ft_printf(const char *str, ...);
int		ft_format(va_list ptr, const char format, int len);
int		ft_printnbr(int n);
int		ft_printstr(char *s);
char	*ft_itoa(int n);

#endif
