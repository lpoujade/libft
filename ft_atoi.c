/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:24:04 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/28 19:23:12 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char const *s)
{
	int ret;
	int i;

	ret = 0;
	i = 0;
	while (s[i])
	{
		ret = ret + (s[i] * ft_pow(10, i));
		ft_putendl("oh");
		i++;
	}
	return (ret);
}
