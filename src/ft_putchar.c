/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/ft_putchar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 16:24:06 by lpoujade          #+#    #+#             */
/*   Updated: 2016/12/16 13:08:22 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  ** apply binary mask (0xFE ? 0b11… 10… ?) to REVERSED c
  ** then split to char
  ** //# define M1		0xc080
  **
  ** # define MASK_1 0b 1100 0000 1000 0000
  ** # define MASK_2 0b111000001000000010000000
  ** # define MASK_3 0b11110000100000001000000010000000
  **# define MASK_4 0b1111100010000000100000001000000010000000
*/

static ssize_t	pwchar_else(wchar_t c, int fd)
{
	char			t[4];

	ft_bzero(&t, 3);
	t[0] = (char)((c >> 18) | 0xc0);
	t[1] = (char)(((c >> 12) & 0x3f) | 0x80);
	t[2] = (char)(((c >> 6) & 0x3f) | 0x80);
	t[3] = (char)((c & 0x3f) | 0x80);
	return (write(fd, t, 4));
}

static ssize_t	pwchar(wchar_t c, int fd)
{
	unsigned int	i;
	char			t[4];

	i = 0;
	ft_bzero(&t, 4);
	if (c < 0x8000)
	{
		t[0] = (char)((c >> 6) | 0xc0);
		t[1] = (char)((c & 0x3f) | 0x80);
		i = 2;
	}
	else if (c < 0x80000)
	{
		t[0] = (char)((c >> 12) | 0xc0);
		t[1] = (char)(((c >> 6 & 0x3f)) | 0x80);
		t[2] = (char)((c & 0x3f) | 0x80);
		i = 3;
	}
	else
		return (pwchar_else(c, fd));
	return (write(fd, t, i));
}

ssize_t			ft_putchar(wchar_t c)
{
	if (c > 0x80)
	{
		return (pwchar(c, STDOUT_FILENO));
	}
	return (write(STDOUT_FILENO, &c, 1));
}

ssize_t			ft_putchar_fd(wchar_t c, int fd)
{
	if (c > 0x80)
	{
		return (pwchar(c, fd));
	}
	return (write(fd, &c, 1));
}
