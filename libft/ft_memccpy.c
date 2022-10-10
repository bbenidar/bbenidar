/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:28:09 by bbenidar          #+#    #+#             */
/*   Updated: 2022/10/10 14:28:15 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	size_t	i;
	
	i = 0;
    unsigned char *s1;
    unsigned char *s2;

    s1 = (unsigned char *)dst;
    s2 = (unsigned char *)src;
	if (!s1 && !s2)
		return (0);
	while (n > i)
	{
		s1[i] =  s2[i];
        if (s2[i] == (unsigned char )c)
            return (s1 + i +1);
		i++;
	}
	return (0);
}
