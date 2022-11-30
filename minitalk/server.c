/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:40:31 by yugurlu           #+#    #+#             */
/*   Updated: 2022/11/30 18:21:57 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	signal_handler(int sig)
{
	static int	n;
	static int	bit;

	if (sig == SIGUSR1)
		bit += 1 << (7 - n);
	n++;
	if (n == 8)
	{
		write(1, &bit, 1);
		n = 0;
		bit = 0;
	}
}

int	main(void)
{
	signal(SIGUSR1, signal_handler);
	signal(SIGUSR2, signal_handler);
	ft_printf("Server PID: %d\n", getpid());
	while (1)
		sleep(0);
}
