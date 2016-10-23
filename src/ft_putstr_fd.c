/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 09:55:00 by lpoujade          #+#    #+#             */
/*   Updated: 2016/10/22 17:45:10 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

size_t	ft_putstr_fd(char const *s, int fd)
{
	if (s)
	{
		return (write(fd, s, ft_strlen(s)));
	}
	else
		return (0);
}
