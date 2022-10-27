/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:45:31 by bbenidar          #+#    #+#             */
/*   Updated: 2022/10/26 16:47:41 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *carrent;
    t_list *nextLst;

    carrent = *lst;
    nextLst = NULL;
    while(carrent != NULL)
    {
        nextLst = carrent -> next;
        ft_lstdelone(carrent, del);
        carrent = nextLst;
    }
    *lst = NULL;
}