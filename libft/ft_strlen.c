/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:13:19 by bbenidar          #+#    #+#             */
/*   Updated: 2022/10/25 18:22:12 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
// #include <stdio.h>
// int main()
// {
// 	int	tab[] = {30,5555542,355521,45554};
// 	printf("%zu\n",ft_strlen((char *)tab));
// 		tab[0] = 25745454;
// 	printf("%zu\n",ft_strlen((char *)tab));
// 		tab[0] = 4099;
// 	printf("%zu\n",ft_strlen((char *)tab));
// }
