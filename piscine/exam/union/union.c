/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 10:43:07 by bbenidar          #+#    #+#             */
/*   Updated: 2022/08/04 18:59:32 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
int checkdoubl2(char *str ,char c)
{
	int i;
	
	i = 0;
 while (str[i] != 0)
 {
	 if (str[i] == c)
		 return(0);
	 i++;
 }
 return(1);
}
int checkdoubl(char *str, char c, int pos)
{
	int i;

	i = 0; 
	while(i<pos)
	{
		if (str[i] == c)
		{
			return(0);
		}
		i++;
	}
	return(1);
}
int main(int ac ,char **av)
{
	int	i;

	i = 0;
   while(av[1][i] != '\0')
   {
	   if (checkdoubl(av[1], av[1][i], i) == 1)
	   {
		   write(1, &av[1][i], 1);
	   }
		i++;
   }
   i = 0;
   while (av[2][i] != '\0')
   {
	   if (checkdoubl2(av[1], av[2][i]))
		{
			if (checkdoubl(av[2],av[2][i], i))
						write(1, &av[2][i], 1);
		}
		i++;
	}
}

