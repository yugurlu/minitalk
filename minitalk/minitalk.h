/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugurlu <yugurlu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:06:19 by yugurlu           #+#    #+#             */
/*   Updated: 2022/11/29 13:38:27 by yugurlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "./utils/ft_printf/ft_printf.h"
# include <signal.h>

void	signal_handler(int sig);
void	convert_char_to_sig(char c, pid_t pid);

#endif
