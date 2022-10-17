/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:20:14 by bbenidar          #+#    #+#             */
/*   Updated: 2022/10/17 21:11:11 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sing(const char *str, int *hi)
{
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	*hi = i;
	return (sign);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;
	int	i;
	int	c;

	result = 0;
	i = 0;
	c = 0;
	sign = ft_sing(str, &i);
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
		c++;
	}
	if (c > 20)
	{
		if (sign == 1)
			return (-1);
		return (0);
	}
	result *= sign;
	return (result);
}
// int main()
// {
//     printf("%d\n",ft_atoi("29496755554554454545296"));
//     printf("%d\n",atoi("-294967296"));
//     printf("%d",atoi("-999999933333333399999"));
// }
