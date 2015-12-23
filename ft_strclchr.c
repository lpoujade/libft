/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:13:22 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/21 15:52:07 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strclchr(char const *s, char c)
{
	int		len;
	char	*str;

	str = (char *)s;
	len = 0;
	while (*str != c && *str)
	{
		str++;
		len++;
	}
	return (len);
}
