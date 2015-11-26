/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:34:06 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/26 13:49:35 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncat(char *s1, const char *s2, size_t n) // if s1 >= s1+s2, s1.append(s2).append(\0) | n caract MAX
{
	ft_strncpy((s1 + ft_strlen(s1)), s2, n);
	return (s1);
}
