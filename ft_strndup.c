/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 22:54:00 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/02 11:33:36 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(char const *s, size_t n)
{
	char *s_d;

	if (n < ft_strlen(s))
	{
		s_d = ft_strnew(ft_strlen(s) - n);
		return (ft_strncpy(s_d, s, n - 1));
	}
	else
		return ((char*)s);
}
