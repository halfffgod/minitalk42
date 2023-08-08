/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:19:58 by nbadalia          #+#    #+#             */
/*   Updated: 2023/02/08 17:47:05 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	ft_bzero(void	*s, size_t	n)
{
	ft_memset(s, '\0', n);
}
/*int main()
{
    char arr[13] = "wallah acbar";
   bzero(arr, 5);
    printf("%s\n", arr);
    if (arr[5] == '\0')
    printf("yes");
    ft_bzero(arr, 5);
    printf("%s\n", arr);
    ft_memset(arr, 97, 1);
    printf("%s\n", arr);
}*/
