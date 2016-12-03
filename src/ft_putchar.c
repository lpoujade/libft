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

/*
** apply binary mask (0xFE ? 0b11… 10… ?) to REVERSED c
** then split to char
*/

static ssize_t pwchar(wchar_t c, int n_b)
{
	//unsigned int it = 0;
	unsigned int i;
	char	t[4];

	i = 0;
	if (n_b < 11 && n_b <= 16) // || c & 0x800
	{
		t[0] = (char) ((c >> 6) | 0xc0);
		t[1] = (char) ((c & 0x3f) | 0x80);
		i = 2;
	}
	else if (n_b < 16) // || c & 0x8000
	{
		t[0] = (char) ((c >> 12) | 0xc0);
		t[1] = (char) (((c >> 6 & 0x3f)) | 0x80);
		t[2] = (char) ((c & 0x3f) | 0x80);
		i = 3;
	}
	else // || c & 0x80000 ?
	{
		t[0] = (char) ((c >> 18) | 0xc0);
		t[1] = (char) (((c >> 12) & 0x3f) | 0x80);
		t[2] = (char) (((c >> 6) & 0x3f) | 0x80);
		t[3] = (char) ((c & 0x3f) | 0x80);
		i = 4;
	}
	return (write(STDOUT_FILENO, t, i));
}

ssize_t	ft_putchar(wchar_t c)
{
	int n_b = 0;

	while (c >> n_b)
		n_b++;
	if (n_b > 7) // || c & 0x80
		return (pwchar(c, n_b));
	return (write(STDOUT_FILENO, &c, 1));
}

ssize_t	ft_putchar_fd(char c, int fd)
{
	return (write(fd, &c, 1));
}
