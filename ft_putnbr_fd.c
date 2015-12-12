/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 09:55:45 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/12 12:02:37 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	put(int n, int fd)
{
	if (n / 10)
	{
		put(n / 10, fd);
		put(n % 10, fd);
	}
	else if (n > 0)
		ft_putchar_fd('0' + n, fd);
	else
		ft_putchar_fd('0' + -n, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putchar_fd('-', fd);
	put(n, fd);
}
