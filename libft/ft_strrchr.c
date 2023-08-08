/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:51:52 by nbadalia          #+#    #+#             */
/*   Updated: 2023/02/08 17:59:09 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
/*int main ()
{
   const char s[] = "wallah acbar abdulah";
   const char c = 'l';
   char *r;
   char *t;

   r = strrchr(s, c);
   t = ft_strrchr(s, c);
   printf("%s\n", r);
   printf("%s\n", t);

   return(0);
}*/
