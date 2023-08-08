/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:43:45 by nbadalia          #+#    #+#             */
/*   Updated: 2023/08/02 18:11:00 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	sending(int pid, char c)
{
	int	i;
	int	bit;

	i = 8;
	while (i--)
	{
		bit = (c >> i & 1);
		if (bit == 0)
			kill(pid, SIGUSR1);
		else if (bit == 1)
			kill(pid, SIGUSR2);
		usleep(100);
	}
}

int	main(int ac, char **av)
{
	int	pid;
	int	i;

	i = 0;
	if (ac < 3)
		ft_putstr_fd(PIDERROR, 1);
	if (ac > 3)
		ft_putstr_fd(ARGERROR, 1);
	pid = ft_atoi(av[1]);
	while (av[2][i])
	{
		sending(pid, av[2][i]);
		i++;
	}
	return (0);
}
