/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:24:04 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/29 17:36:32 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char const *s)
{
	int ret;
	int i;
	int sign;
	int isdigit;

	isdigit = 1;
	ret = 0;
	i = 0;
	sign = 0;

	if (s[0] == '-')
		sign = 1;
	else if (s[0] == '+' || s[0] == ' ')
		i++;

	while (s[i + sign] && isdigit)
	{
		if (ft_isdigit(s[i + sign]))
		{
			ret = ret + ((s[i + sign] - '0') * ft_pow(10, ft_strlen(s) - i));
		}
		else
			isdigit = 0;
		i++;
	}
	if (sign)
		ret = -ret;
	ret = ret/10;
	if (sign)
		ret = ret/10;
	return (ret);
}
