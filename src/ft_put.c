/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/ft_put.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 16:24:45 by lpoujade          #+#    #+#             */
/*   Updated: 2016/12/14 19:17:58 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static ssize_t pwstr_fd(const wchar_t *s, int fd)
{
	ssize_t r;

	r = 0;
	while (*s)
	{
		r += ft_putchar_fd(*s, fd);
		s++;
	}
	return (r);
}

ssize_t	ft_putstr(const wchar_t *s)
{
	if (*s > 0x80)
		return (pwstr_fd(s, 1));
	return (write(STDOUT_FILENO, s, ft_strlen((char*)s)));
}

ssize_t	ft_putstr_fd(const wchar_t *s, int fd)
{
	if (*s > 0x80)
		return (pwstr_fd(s, fd));
	return (write(fd, s, ft_strlen((char*)s)));
}

ssize_t	ft_putendl(const char *s)
{
	ssize_t	r;
	r = write(STDOUT_FILENO, s, ft_strlen(s));
	r += ft_putchar('\n');
	return (r);
}

ssize_t	ft_putendl_fd(const char *s, int fd)
{
	ssize_t	r;

	r = write(fd, s, ft_strlen(s));
	r += ft_putchar_fd('\n', fd);
	return (r);
}

