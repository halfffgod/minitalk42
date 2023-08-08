/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 19:24:04 by nbadalia          #+#    #+#             */
/*   Updated: 2023/02/08 17:48:52 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	srclen;
	size_t	index;
	size_t	i;

	i = 0;
	srclen = 0;
	while (src[srclen])
		srclen++;
	if (!dest)
		return (srclen);
	while (dest[i] && i < size)
		i++;
	if (size == 0)
		return (srclen);
	srclen += i;
	index = i;
	while (src[i - index] && i < size - 1)
	{
	dest[i] = src[i - index];
	i++;
	}
	if (i < size)
		dest[i] = '\0';
	return (srclen);
}
/*int main() {
    char dest[20] = "wallah ";
    char src[20] = "\0";
  	
	printf("%lu\n", strlcat(((void *)0), dest, 0));
	printf("%s\n", dest);
	printf("%lu\n", ft_strlcat(((void *)0), dest, 0));
	printf("%s\n", dest);

    return 0;
}*/
