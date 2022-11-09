/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 20:02:11 by bbenidar          #+#    #+#             */
/*   Updated: 2022/08/04 16:57:58 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
 int checkdouble(char *str , char c ,int pos)
{
	int i;

	i = 0;
	while(i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return(1);
}

int main(int ac , char **av)
{
	if (ac == 3)
	{
		int	i;
		int j;

		j = 0;	
		while( av[1][j] != '\0')
		{
			i = 0;
			while(av[2][i] != '\0')
			{
			 if (av[1][j] == av[2][i])
			 {
				 if (checkdouble(av[1],av[1][j], j ) == 1)
				 {
					 write(1, &av[1][j], 1);
				 	break;
				 }
			 }
			i++;
			}
			j++;
		}
		}
	write(1, "\n", 1);
}
