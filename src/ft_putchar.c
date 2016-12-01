/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/ft_putchar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 16:24:06 by lpoujade          #+#    #+#             */
/*   Updated: 2016/12/01 18:22:01 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

# define U1_MASK 0x80
# define u2_mask
# define u3_mask

static ssize_t pwchar(wchar_t c, int n_b)
{
	unsigned int i = 0;
	unsigned int it = 0;
	char	t[4];

	if (n_b < 11 && n_b <= 16)
	{
		it = (char) ((c >> 6) | 0xc0) | 
		t[0] = (char) ((c >> 6) | 0xc0);
		t[1] = (char) ((c & 0x3f) | 0x80);
		i = 2;
	}
	else if (n_b < 16)
		i = 0;
	else
		i = 0;
	return (write(STDOUT_FILENO, t, i));
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
