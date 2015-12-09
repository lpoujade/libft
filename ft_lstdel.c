/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 18:14:01 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/09 18:19:58 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	tmp = *alst;
	while (*tmp->next)
	{
		(del)(*tmp->content, alst->content_size);
		free(*tmp->content);
		*tmp = *tmp->next;
	}
	*aslt = NULL;
}
