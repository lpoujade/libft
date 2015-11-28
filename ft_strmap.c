/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:28:50 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/28 16:13:48 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int index;
	char *ret;

	ret = ft_strnew(strlen(s));
	index = 0;
	ft_putnbr(ft_strlen(s));ft_putchar('\n');
	while (s[index])
	{
		ret[index] = (*f)(s[index]);
		index++;
	}
	ret[index]= '\0';

	return (ret);
}
