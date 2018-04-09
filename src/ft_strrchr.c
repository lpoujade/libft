/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/ft_strrchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 13:15:05 by lpoujade          #+#    #+#             */
/*   Updated: 2016/11/27 13:15:05 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (len && s[len] != c)
		len--;
	return (len ? s + len : NULL);
}
