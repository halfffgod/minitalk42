/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:53:15 by nbadalia          #+#    #+#             */
/*   Updated: 2023/02/15 15:37:11 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*i;
	size_t	max;

	max = count * size;
	if (max > SIZE_MAX)
		return (NULL);
	i = malloc(max);
	if (i == NULL)
		return (NULL);
	ft_bzero(i, max);
	return (i);
}
