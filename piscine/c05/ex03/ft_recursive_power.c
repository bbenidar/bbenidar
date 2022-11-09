/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 19:22:53 by bbenidar          #+#    #+#             */
/*   Updated: 2022/08/08 21:34:49 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power > 1)
	{
		result *= ft_recursive_power(nb, power - 1);
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (result);
}
