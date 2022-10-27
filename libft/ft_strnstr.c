/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 22:34:56 by bbenidar          #+#    #+#             */
/*   Updated: 2022/10/24 11:53:07 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str1;
	char	*str2;
	size_t	i;
	size_t	j;
	size_t	needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	str1 = (char *)haystack;
	str2 = (char *)needle;
	if (!*str2)
		return (str1);
	while (i < len && haystack[i])
	{
		j = 0;
		while (str1[i + j] == str2[j] && len - i >= needle_len)
		{
			if (!str2[j + 1])
				return (str1 + i);
			else
				j++;
		}
		i++;
	}
	return (0);
}
