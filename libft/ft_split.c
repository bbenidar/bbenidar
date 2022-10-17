/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:46:05 by bbenidar          #+#    #+#             */
/*   Updated: 2022/10/17 21:21:44 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lklmat(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*s)
	{
		if (*s != c && j == 0)
		{
			j = 1;
			i++;
		}
		else if (*s == c)
			j = 0;
		s++;
	}
	return (i);
}

static char	*tapi_lclmat(char const *s, int start, int end)
{
	int		i;
	char	*tap;

	i = 0;
	tap = (char *)malloc(sizeof(char) * ((end + 1) - start));
	while (start < end)
	{
		tap[i] = s[start];
		start++;
		i++;
	}
	tap[i] = 0;
	return (tap);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	size_t	i;
	int		awdi;
	int		j;

	j = 0;
	i = 0;
	awdi = -1;
	if (s == 0)
		return (0);
	p = malloc(sizeof(*p) * lklmat(s, c));
	if (!p)
		return (0);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && awdi < 0)
			awdi = i;
		else if ((s[i] == c || i == ft_strlen(s)) && awdi >= 0)
		{
			p[j++] = tapi_lclmat(s, awdi, i);
			awdi = -1;
		}
		i++;
	}
	return (p);
}
