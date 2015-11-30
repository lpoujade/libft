/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 12:04:15 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/30 19:40:38 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *s, int c)
{
	size_t i;

	i = 0;
	while (s[i] != (char)c && s[i - 1])
		i++;
	if (i == ft_strlen(s))
		return (NULL);
	else
		return ((char *)(s + i + 1));
}
