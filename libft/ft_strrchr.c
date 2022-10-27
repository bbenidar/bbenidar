/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:58:11 by bbenidar          #+#    #+#             */
/*   Updated: 2022/10/24 11:57:40 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	*idk;

	idk = (char *)s;
	ptr = 0;
	if (c == 0)
		ptr = idk;
	while (*idk)
	{
		if (*idk == (char )c)
			ptr = idk;
		idk++;
	}
	if (*idk == (char)c)
		ptr = idk;
	return (ptr);
}
