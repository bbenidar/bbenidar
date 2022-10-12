/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:58:11 by bbenidar          #+#    #+#             */
/*   Updated: 2022/10/12 14:10:41 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ini ;

	ini = s;
	while (*s)
		s++;
	while (*ini != *s && *s != c)
		s--;
	if (*s == c)
		return ((char *)s);
	return (0);
}
