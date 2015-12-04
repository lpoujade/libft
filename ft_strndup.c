/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 22:54:00 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/04 19:11:23 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(char const *s, size_t n)
{
	char *s_d;

	if (n < ft_strlen(s))
	{
		if (!(s_d = ft_strnew(ft_strlen(s) - (ft_strlen(s) - n))))
			return (NULL);
		return (ft_strncpy(s_d, s, n - 1));
	}
	else
		return ((char*)s);
}
