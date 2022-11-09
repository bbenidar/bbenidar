/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:57:09 by bbenidar          #+#    #+#             */
/*   Updated: 2022/08/11 17:28:32 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char    *ft_strrev(char *str)
{
	int	i;
	int j;
	char dest;

	i = 0;
	while (str[i])
	{
		i++;
	}
	i = i - 1;
	while (j < i)
	{
		dest = str[j];
		str[j] = str[i];
	   str[i] = dest;
	   i--;
	   j++;
	}
	return (str);
}
int main()
{
	char sr[] ="brahim";
	printf("%s",ft_strrev(sr));
}


