/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:36:49 by bbenidar          #+#    #+#             */
/*   Updated: 2022/08/11 18:15:39 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include<unistd.h>

int ft_atoi(const char *str)
{
	int i;
	int result;
	int sign;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if(str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0' )
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}
int main()
{
	const char b[] = "-4542546";
	printf("%d", ft_atoi(b));
}
