/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 18:28:09 by nbadalia          #+#    #+#             */
/*   Updated: 2023/02/08 17:45:48 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int a)
{
	if ((a >= '0' && a <= '9')
		|| (a >= 'a' && a <= 'z')
		|| (a >= 'A' && a <= 'Z'))
		return (1);
	else
		return (0);
}
