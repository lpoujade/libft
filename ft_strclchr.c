/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:13:22 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/26 14:19:47 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strclchr(char const *s, char c)
{
	int len;
	char *str;

	str = strdup(s);
	len = 0;
	while (*str != c)
	{
		str++;
		len++;
	}
	return (len);
}
