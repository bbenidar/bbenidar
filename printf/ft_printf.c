/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:55:44 by bbenidar          #+#    #+#             */
/*   Updated: 2022/11/13 18:57:02 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (s[i])
		write(1, &s[i++], 1);
	return (i);
}

int	ft_printnbr(int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(n);
	len = ft_printstr(num);
	free(num);
	return (len);
}

int	ft_format(va_list ptr, const char format, int len)
{
	if (format == 'i' || format == 'd' )
		len += ft_printnbr(va_arg(ptr, int));
	else if (format == 'u' )
		len += ft_printuns(va_arg(ptr, unsigned int));
	else if (format == 'c')
		len += ft_putchar(va_arg(ptr, int));
	else if (format == 's')
		len += ft_printstr(va_arg(ptr, char *));
	else if (format == 'x')
		len += ft_print_hex(va_arg(ptr, int), 'x');
	else if (format == 'X')
		len += ft_print_hex(va_arg(ptr, int), 'X');
	else if (format == 'p')
		len += ft_print_ptr(va_arg(ptr, char *));
	else if (format == '%')
		len += write(1, "%", 1);
	else
		len += write(1, &format, 1);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	ptr;

	len = 0;
	i = 0;
	va_start(ptr, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == 0)
				len += 0;
			else
			{
				len = ft_format(ptr, str[i + 1], len);
				i++;
			}
		}
		else
			len += write(1, &str[i], 1);
		i++;
	}
	va_end(ptr);
	return (len);
}
