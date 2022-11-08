/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:57:15 by bbenidar          #+#    #+#             */
/*   Updated: 2022/10/30 20:00:36 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = ((unsigned char *)b);
	while (len > 0)
	{
		*p = c;
		len--;
		p++;
	}
	return (b);
}
