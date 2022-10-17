/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:22:53 by bbenidar          #+#    #+#             */
/*   Updated: 2022/10/17 18:12:01 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start,
		size_t len)
{
	char			*src;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	src = (char *)malloc(sizeof(char) * (len + 1));
	if (!src)
		return (0);
	while (s[i])
	{
		if (i >= start && len > j)
		{
			src[j] = s[i];
			j++;
		}
		i++;
	}
	src[j] = 0;
	return (src);
}
