/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 20:58:58 by bbenidar          #+#    #+#             */
/*   Updated: 2022/08/10 21:14:00 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *) malloc((ft_strlen(src) + 1) * sizeof(char ));
	if (!dest)
	{
		return (0);
	}
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*to_return;

	to_return = malloc(sizeof(struct s_stock_str) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		to_return[i].size = ft_strlen(*(av + i));
		to_return[i].copy = ft_strdup(*(av + i));
		to_return[i].str = *(av + i);
		i++;
	}
	to_return[i].copy = 0;
	to_return[i].str = 0;
	return (to_return);
}
