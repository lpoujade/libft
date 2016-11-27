/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/ft_put.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 16:24:45 by lpoujade          #+#    #+#             */
/*   Updated: 2016/11/27 16:24:45 by lpoujade         ###   ######## fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ssize_t	ft_putstr(const char *s)
{
	return (write(STDOUT_FILENO, s, ft_strlen(s)));
}

ssize_t	ft_putstr_fd(const char *s, int fd)
{
	return (write(fd, s, ft_strlen(s)));
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
