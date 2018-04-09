/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/ft_strlen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 12:27:34 by lpoujade          #+#    #+#             */
/*   Updated: 2016/11/27 12:27:34 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	char const *mark;

	if (!s)
		return (0);
	mark = s;
	while (*mark)
		mark++;
	return ((size_t)(mark - s));
}
