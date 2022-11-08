/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:19:49 by bbenidar          #+#    #+#             */
/*   Updated: 2022/11/02 14:38:20 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///////////////scaning first of word///////////////

static int	ft_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;

	start = 0;
	while (s1[start])
	{
		i = 0;
		while (set[i] != s1[start])
		{
			i++;
			if (i == ft_strlen(set))
				return (start);
		}
		start++;
	}
	return (0);
}
///////////////scaning last of word///////////////

static int	ft_end(char const *s1, char const *set)
{
	size_t	i;
	size_t	end;

	end = ft_strlen(s1) - 1;
	i = 0;
	while (end > 0)
	{
		i = 0;
		while (set[i] != s1[end])
		{
			i++;
			if (i == ft_strlen(set))
				return (end + 1);
		}
		end--;
	}
	return (0);
}
///////////////fct prncpl///////////////

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	size_t	i;
	size_t	start;
	size_t	end;

	if (!*s1)
		return (ft_strdup(""));
	if (!*set)
		return (ft_strdup(s1));
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	if (start == 0 && end == ft_strlen(s1))
		return (ft_strdup(s1));
	if (end - start == 0)
		return (ft_strdup(""));
	p = (char *)malloc(sizeof(*s1) * (end + 1 - start));
	if (!p)
		return (0);
	i = 0;
	while (start < end)
		p[i++] = s1[start++];
	p[i] = 0;
	return (p);
}
