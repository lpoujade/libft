/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/ft_putnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 16:30:38 by lpoujade          #+#    #+#             */
/*   Updated: 2016/12/16 15:12:42 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		put(int n, int fd)
{
	if (n / 10)
	{
		put(n / 10, fd);
		put(n % 10, fd);
	}
	else if (n > 0)
		ft_putchar_fd('0' + (char)n, fd);
	else
		ft_putchar_fd('0' + -(char)n, fd);
}

void			ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putchar_fd('-', fd);
	put(n, fd);
}

void			ft_putnbr(int n)
{
	ft_putnbr_fd(n, STDOUT_FILENO);
}

void			ft_putoctal(unsigned long long num, int *w)
{
	if (num >= 8)
	{
		ft_putoctal(num / 8, w);
		ft_putoctal(num % 8, w);
	}
	else
		*w += ft_putchar((char)(num + '0'));
}
