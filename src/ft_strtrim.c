/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/ft_strtrim.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 16:08:32 by lpoujade          #+#    #+#             */
/*   Updated: 2016/11/27 16:08:32 by lpoujade         ###   ######## fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	bl(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char		*ft_ftstrtrim(const char *s)
{
	char	*ret;
	size_t	len;
	size_t	i;

	i = 0;
	while (bl(*s))
		s++;
	len = ft_strlen(s) - 1;
	while (bl(s[len]))
		len--;
	ret = malloc(len);
	while (i < len && s[i])
	{
		ret[i] = s[i];
		i++;
	}
	ret[i] = 0;
	return (ret);
}

/**
 ** @name    Trim a string
 ** @brief   Remove trailings and leadings set of characters
 ** @ingroup libft
 **
 ** ft_strtrim(char *str, char *char_set) returns a string without each 
 ** character in the char_set string if between the beginning or the end
 ** and the first other character (which don't appear in char_set)
 **
 ** @param [in] s const char *str        String to trim
 ** @param [in] set const char *char_set   Characters to use for trim
 **
 ** @retval char *  Pointer to new string trimmed
 **
 ** Example Usage:
 ** @code
 **    ft_strtrim("' fyah '", "' ")
 ** @endcode
 ** Will return pointer to "fyah"
*/

char		*ft_strtrim(const char *s, const char *set)
{
	char	*ret;
	size_t	len;

	while (*s && ft_strchr(set, *s))
		s++;
	len = ft_strlen(s);
	while (len && ft_strchr(set, s[len]))
		len--;
	ret = ft_strsub(s, 0, len + 1);
	return (ret);
}
