/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:38:50 by bbenidar          #+#    #+#             */
/*   Updated: 2022/11/12 15:43:47 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr_len(unsigned long long num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_put_ptr(unsigned long long num)
{
	if (num >= 16)
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar((num + '0'));
		else
			ft_putchar(num - 10 + 'a');
	}
}

int	ft_print_ptr2(unsigned long long num)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_put_ptr(num);
	return (ft_ptr_len(num));
}

int	ft_print_ptr(char *s)
{
	int					print_length;
	unsigned long long	ptr;

	ptr = (unsigned long long)s;
	print_length = 0;
	print_length += write(1, "0x", 2);
	if (ptr == 0)
		print_length += write(1, "0", 1);
	else
	{	
		print_length += ft_print_ptr2(ptr);
	}
	return (print_length);
}
