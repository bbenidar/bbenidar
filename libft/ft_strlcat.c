/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:25:07 by bbenidar          #+#    #+#             */
/*   Updated: 2022/10/31 19:18:33 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	jlen;

	jlen = ft_strlen(src);
	if (!dst && !dstsize)
		return (jlen);
	i = 0;
	dlen = ft_strlen(dst);
	j = dlen;
	if (dstsize <= dlen)
		return (dstsize + jlen);
	while (src[i] && j + 1 < dstsize)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dlen + ft_strlen(src));
}
