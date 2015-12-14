/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.ccts/libft/ft_lstdel.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 18:14:01 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/14 12:52:14 by liumsade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
    t_list *tmp;
    t_list *nxt;

    tmp = *alst;
    while (tmp)
    {
        nxt = tmp->next;
        ft_lstdelone(&tmp, (del));
        tmp = nxt;
    }
    *alst = NULL;
}
