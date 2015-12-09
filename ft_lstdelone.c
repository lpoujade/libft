/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 18:07:09 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/09 18:13:55 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	(del)(alst->content, alst->content_size);
	free(alst->content);
	alst->content = NULL;
}
