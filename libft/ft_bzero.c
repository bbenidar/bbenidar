/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:38:19 by bbenidar          #+#    #+#             */
/*   Updated: 2022/10/06 18:43:59 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

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

void	ft_bzero(void *s, size_t n)
{
	if (n != 0)
		memset(s, '\0', n);
}
