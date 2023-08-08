/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:07:52 by nbadalia          #+#    #+#             */
/*   Updated: 2023/02/08 11:22:56 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*t;

	if (!del || !*lst || !lst)
		return ;
	while (*lst && lst)
	{
		t = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = t;
	}
}
