/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 21:18:33 by lpoujade          #+#    #+#             */
/*   Updated: 2015/11/23 21:18:49 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(char *s1, char *s2)
{
    int c;
    int ret;

    ret = 0;
    c = 0;
    while (s1[c] || s2[c])
    {
        if (s1[c] < s2[c])
            ret = s2[c] - s1[c];
        else if (s1[c] > s2[c])
            ret = s1[c] - s2[c];
        else
            ret = 0;
        c++;
    }
    return (ret);
}
