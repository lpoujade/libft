/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/stack_indent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 09:17:30 by lpoujade          #+#    #+#             */
/*   Updated: 2018/04/09 09:17:30 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * char **symbols = NULL;
 * symbols = backtrace_symbols()
*/

int		stack_indent(int fd)
{
	int		ret;
	void	*buffer[100];

	ret = backtrace(buffer, 100);
	if (fd >= 0)
		while (ret--)
			ft_putchar_fd('|', fd);
	return 0;
}
