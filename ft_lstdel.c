/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.ccts/libft/ft_lstdel.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 18:14:01 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/13 11:30:03 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	tmp = *alst;
	if (*alst && del)
	{
		while (tmp)
		{
			(del)(tmp->content, tmp->content_size);
			free(tmp->content);
			tmp = tmp->next;
		}
		*alst = NULL;
	}
}
