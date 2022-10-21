/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:32:24 by bbenidar          #+#    #+#             */
/*   Updated: 2022/10/21 10:38:29 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_putendl_fd(char *s, int fd)
{
    size_t i;

    i = 0;
    if(!s)
        return ;
    while(s[i])
    {
        write(fd, &s[i], 1);
        if (i == (ft_strlen(s) - 1))
            write(fd, "\n", 1);
        i++;
    }
}