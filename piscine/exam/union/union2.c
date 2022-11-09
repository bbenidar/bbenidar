/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:17:24 by bbenidar          #+#    #+#             */
/*   Updated: 2022/08/11 20:05:12 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int sheckdoubles2(char *str , char c, int pos)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c )
			return (0);
		i++;
	}
	return(1);
}

int sheckdoubels(char *str, char c,int pos)
{
	int i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return(0);
		i++;
	}
	return (1);
}

int main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 3)
	{
		while (av[1][i] != '\0')
		{
			if(sheckdoubels(av[1],av[1][i],i) == 1)
				write(1, &av[1][i], 1);
			i++;
		}
		i = 0;
		while (av[2][i])
		{
			if (sheckdoubles2(av[1],av[2][i],i) == 1)
			{
				if (sheckdoubels(av[2], av[2][i],i) == 1)
				   	write(1, &av[2][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}

