/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 22:34:56 by bbenidar          #+#    #+#             */
/*   Updated: 2022/10/12 14:07:04 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (len > i)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && haystack[i + j] != '\0'
			&& needle != '\0' && i + j < len)
			j++;
		if (j == ft_strlen(needle))
			return (((char *)haystack) + i);
		i++;
	}
	return (0);
}
