/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenidar <bbenidar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:45:31 by bbenidar          #+#    #+#             */
/*   Updated: 2022/10/31 13:47:35 by bbenidar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*carrent;
	t_list	*nextlst;

	if (!del || !lst)
		return ;
	carrent = *lst;
	nextlst = NULL;
	while (carrent != NULL)
	{
		nextlst = carrent -> next;
		ft_lstdelone(carrent, del);
		carrent = nextlst;
	}
	*lst = NULL;
}
