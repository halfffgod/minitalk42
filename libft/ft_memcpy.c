/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:19:57 by nbadalia          #+#    #+#             */
/*   Updated: 2023/02/08 17:47:40 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*dsty;
	char	*srcy;

	i = 0;
	dsty = (char *) dst;
	srcy = (char *) src;
	if (!dst && !src)
		return (0);
	while (i < (int)n)
	{
		dsty[i] = srcy[i];
		i++;
	}
	return (dst);
}
/*int main()
{
    char dest[20] = "wallah acbar";
    char src[20] = "not ur type";
    memcpy(src, dest, 6);
    printf("%s\n", src);
    ft_memcpy(src, dest, 6);
    printf("%s\n", src);
}*/
