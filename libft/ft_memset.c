/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:57:15 by bbenidar          #+#    #+#             */
/*   Updated: 2022/10/06 19:31:16 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void	*memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = ((unsigned char *)b);
	while (*p && len > 0)
	{
		*p = c;
		len--;
		p++;
	}
	return (b);
}
