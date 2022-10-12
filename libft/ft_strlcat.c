/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:25:07 by bbenidar          #+#    #+#             */
/*   Updated: 2022/10/12 15:59:58 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	jlen;

	if ((!dst && !src) || dstsize == 0)
		return (0);
	i = 0;
	dlen = ft_strlen(dst);
	j = dlen;
	jlen = ft_strlen(src);
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
