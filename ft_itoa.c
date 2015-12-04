/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 21:50:15 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/04 18:51:53 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		get_digits(int num)
{
	int c;

	c = 0;
	if (num == 0)
		return (1);
	while (num)
	{
		num = num / 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	int		digits;
	int		sign;
	char	*ret;

	sign = 0;
	digits = get_digits(n);
	if (n < 0)
	{
		n = -n;
		sign = 1;
	}
	if (!(ret = ft_strnew(digits + sign)))
		return (ret);
	if (sign)
		ret[0] = '-';
	else if (n > 0)
		digits--;
	else
		ret[0] = '0';
	while (n)
	{
		ret[digits] = '0' + (n % 10);
		n = n / 10;
		digits--;
	}
	return (ret);
}
