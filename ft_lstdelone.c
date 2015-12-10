/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 18:07:09 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/10 10:45:11 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	(del)(alst->content, alst->content_size);
	free(alst->content);
	alst->content = NULL;
}
