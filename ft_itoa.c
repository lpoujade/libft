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
	/*
	char *nb;

	nb = ft_strnew(sizeof(int) * sizeof(char));

	if (nb)
	{
		while (n)
		{
			if (n < 0)
			{
				nb = "-";
				n -= n;
			}
			if (n >= 10)
			{
			}
		}
	}
	*/
	return ((char*)(long)n);
}
