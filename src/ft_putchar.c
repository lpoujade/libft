/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/ft_putchar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 16:24:06 by lpoujade          #+#    #+#             */
/*   Updated: 2016/12/01 13:41:37 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static ssize_t pwchar(wchar_t c, int n_b)
{
	int i = 0;
	char	t[4];

	if (n_b < 11)
	{
		t[0] = (char)(c & 0b10000000);
		t[1] = (char)((c >> 8) & 0b11000000) ;
		i = 2;
	}
	else if (n_b < 16)
		i = 0;
	else
		i = 0;
	return (write(STDOUT_FILENO, &c, i));
}

ssize_t	ft_putchar(wchar_t c)
{
	int n_b = 0;
	ssize_t r;

	while (c >> n_b)
		n_b++;
	if (n_b > 7)
		return (pwchar(c, n_b));
	r = write(STDOUT_FILENO, &c, 1);
	return (r);
}

ssize_t	ft_putchar_fd(char c, int fd)
{
	return (write(fd, &c, 1));
}
