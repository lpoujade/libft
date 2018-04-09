/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/ft_strchr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 13:13:27 by lpoujade          #+#    #+#             */
/*   Updated: 2016/11/27 13:13:27 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strchr(const char *s, int c)
{
	while (*s && (unsigned char)*s != (unsigned char)c)
		s++;
	return (*s ? s : NULL);
}
