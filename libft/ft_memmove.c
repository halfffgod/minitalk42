/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:55:21 by nbadalia          #+#    #+#             */
/*   Updated: 2023/02/08 17:48:14 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst == '\0' && src == '\0')
		return (0);
	if ((size_t)dst - (size_t)src < len)
	{
		i = len - 1;
		while (i >= 0 && i < len)
		{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i--;
		}
	}
	else
	{
		while (i < len)
		{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
		}
	}
	return (dst);
}
