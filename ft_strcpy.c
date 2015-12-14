/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 21:21:24 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/14 18:59:09 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, const char *src)
{
	char *origin;

	origin = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (origin);
}
