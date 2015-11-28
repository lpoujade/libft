/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_itoa.c											:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: lpoujade <lpoujade@student.42.fr>			+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2015/11/24 18:49:07 by lpoujade		   #+#	  #+#			  */
/*	 Updated: 2015/11/24 21:34:54 by lpoujade		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int digits = 0;
	int tmp_n = -n;
	int sign = 0;
	char *ret;

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
