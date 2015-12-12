/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlst.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 14:00:10 by lpoujade          #+#    #+#             */
/*   Updated: 2015/12/12 15:06:17 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int		main(void)
{
	t_list *alph;
	t_list *new;
	int c = 'a';

	int	tmp = 0;

	alph = ft_lstnew(&c, sizeof(c));
	while (c < 'z')
	{
		c++;
		new = ft_lstnew(&c, sizeof(c));
		ft_lstadd(&alph, new);
	}
	new = alph;
	while (new)
	{
		write(1, new->content, 1);
		new = new->next;
	}
	ft_putchar('\n');ft_putchar('\n');

	new = alph;
	while (new)
	{
		ft_putnbr((int)new->content);ft_putchar('\n');
		new->content = &tmp;
		new = new->next;
	}
	ft_putchar('\n');ft_putchar('\n');


	return (0);
}
