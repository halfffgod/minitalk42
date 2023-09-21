/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbadalia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:43:36 by nbadalia          #+#    #+#             */
/*   Updated: 2023/08/02 18:09:42 by nbadalia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	bi_to_dec(char *bits)
{
	int		i;
	int		num;
	int		base;
	char	c;

	i = 0;
	num = 0;
	base = 128;
	while (bits[i])
	{
		num += base * (bits[i] - '0');
		base /= 2;
		i++;
	}
	c = num + 0;
	write(1, &c, 1);
}

void	sig(int signal)
{
	static int	c;
	static char	*bits;

	if (bits == NULL)
	{
		bits = ft_strdup("");
		c = 1;
	}
	if (signal == SIGUSR1)
		bits = ft_strjoin(bits, "0");
	else
		bits = ft_strjoin(bits, "1");
	if (c == 8)
	{
		bi_to_dec(bits);
		free(bits);
		bits = NULL;
	}
	c++;
}

int	main(void)
{
	int		pid;
	char	*p;

	pid = getpid();
	p = ft_itoa(pid);
	ft_putstr_fd("PID: ", 1);
	ft_putstr_fd(p, 1);
	free(p);
	write(1, "\n", 1);
	signal(SIGUSR1, sig);
	signal(SIGUSR2, sig);
	while (1)
		pause();
	return (0);
}
