/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 10:00:05 by lpoujade          #+#    #+#             */
/*   Updated: 2016/10/22 17:47:55 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putendl_fd(char const *s, int fd)
{
	size_t	ret;

	ret = 0;
	ret = ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
	return (ret + 1);
}
