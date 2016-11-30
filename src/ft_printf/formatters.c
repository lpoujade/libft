/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formatters.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 18:39:34 by lpoujade          #+#    #+#             */
/*   Updated: 2016/11/29 18:40:12 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#pragma clang diagnostic ignored "-Weverything"

int	fint(va_list ap, char **dest, size_t *len, const char *format)
{
	char	*tmp;
	size_t	d;

	(void)format;
	tmp = ft_itoa(va_arg(ap, int));
	d = ft_strlen(tmp);
	if (d + ft_strlen(*dest) > *len - 1)
	{
		ft_realloc((void**)dest, *len, (*len) * 2);
		*len *= 2;
	}
	ft_strcat(*dest, tmp);
	free(tmp);
	return (d);
}

int	fchar(va_list ap, char **dest, size_t *len, const char *format)
{
	char	d;
	size_t	h_len;

	(void)format;
	d = (char)va_arg(ap, int);
	if (*len == ft_strlen(*dest) - 1)
	{
		ft_realloc((void**)dest, *len, (*len) * 2);
		*len *= 2;
	}
	h_len = ft_strlen(*dest);
	(*dest)[h_len] = d;
	return (1);
}

int	fstr(va_list ap, char **dest, size_t *len, const char *format)
{
	char	*str;
	size_t	s_len;

	(void)format;
	str = va_arg(ap, char *);
	s_len = ft_strlen(str);
	if (s_len + ft_strlen(*dest) > *len - 1)
	{
		ft_realloc((void**)dest, *len, (*len) * 2);
		*len *= 2;
	}
	ft_strcat(*dest, str);
	return (s_len);
}

int	flong(va_list ap, char **dest, size_t *len, const char *format)
{
	char	*tmp;
	size_t	d;

	tmp = NULL;
	if (*(format + 1) == 'u')
		tmp = ft_itoa(va_arg(ap, unsigned long));
	else if (*(format + 1) == 'd')
		tmp = ft_itoa(va_arg(ap, long int));
	d = ft_strlen(tmp);
	if (d + ft_strlen(*dest) > *len - 1)
	{
		ft_realloc((void**)dest, *len, (*len) * 2);
		*len *= 2;
	}
	ft_strcat(*dest, tmp);
	free(tmp);
	return (d);
}
