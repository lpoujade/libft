/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 11:31:11 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/02 11:53:09 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		digits;
	int		tmp_n;
	int		sign;
	char	*ret;

	digits = 0;
	sign = 0;
	tmp_n = n;
	if (n < 0)
	{
		n = -n;
		sign = 1;
	}
	while (tmp_n)
	{
		tmp_n = tmp_n / 10;
		digits++;
	}
	ret = ft_strnew(digits + sign);
	if (sign)
		ret[0] = '-';
	else
		digits--;
	while (n)
	{
		ret[digits] = '0' + (n % 10);
		n = n / 10;
		digits--;
	}
	return (ret);
}
