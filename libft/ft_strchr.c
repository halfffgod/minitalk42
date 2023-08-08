/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:22:27 by nbadalia          #+#    #+#             */
/*   Updated: 2023/02/08 17:58:36 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	a;
	int		i;

	a = c;
	i = 0;
	while (s[i] != '\0' && s[i] != a)
		i++;
	if (s[i] == a)
		return ((char *)(s + i));
	return (NULL);
}
/*int main () {
   const char s[] = "";
   const char c = 'd';
   char *r;
   char *t;

   r = strchr(s, c);
   t = ft_strchr(s, c);
   printf("%s\n", r);
   printf("%s\n", t);
   
   return(0);
}*/
