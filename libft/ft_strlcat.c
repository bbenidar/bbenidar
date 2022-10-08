/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:25:07 by bbenidar          #+#    #+#             */
/*   Updated: 2022/10/08 17:10:05 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include<string.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *restrict dst, const char *restrict src,
		size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	jlen;

	i = 0;
	j = 0;
	while (dst[j] != '\0')
	{
		j++;
	}
	dlen = j;
	jlen = ft_strlen(src);
	if (dstsize == 0 || dstsize > jlen)
		return (dlen + jlen);
	while (src[i] && dstsize >= i)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dlen + jlen);
}
/*int main()
{
    size_t x;
    char str[] = "brahim";
    char dest[] = "benidar";
    x = ft_strlcat(dest,str,7);
    printf("len=%zu | dest = %s\n",x,dest);
     x = strlcat(dest,str,7);
     printf("len=%zu | dest = %s\n",x,dest);
    return (0);
}*/
