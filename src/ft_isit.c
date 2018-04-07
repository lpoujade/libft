/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/ft_isit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 15:27:18 by lpoujade          #+#    #+#             */
/*   Updated: 2016/11/27 15:27:18 by lpoujade         ###   ######## fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')));
}

int	ft_isalnum(int c)
{
	return (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			|| (c >= '0' && c <= '9'));
}

int	ft_isdigit(int c)
{
	return ((c >= '0' && c <= '9'));
}

int	ft_isascii(int c)
{
	return ((c >= 0 && c <= 127));
}

int	ft_isprint(int c)
{
	return ((c >= ' ' && c <= '~'));
}
