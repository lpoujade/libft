/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src/logf_intern.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 09:02:26 by lpoujade          #+#    #+#             */
/*   Updated: 2018/04/09 09:02:26 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "logf.h"

t_logf	*create_logf(char *fname)
{
	t_logf	*new;

	if (!(new = malloc(sizeof(t_logf))))
	{
		ft_putendl_fd("not enough memory", 2);
		return (NULL);
	}
	if (!(new->fname = ft_strdup(fname)))
		return (NULL);
	new->next = new;
	new->prev = new;
	if ((new->fd = open(new->fname,
					O_WRONLY | O_APPEND | O_CREAT, S_IRUSR | S_IWUSR)) < 0)
	{
		ft_putstr_fd("can't open (for log) file ", 2);
		ft_putendl_fd(new->fname, 2);
		return (NULL);
	}
	return (new);
}

t_logf	*use_logf(char *fname)
{
	static t_logf	*list_logf = NULL;
	t_logf			*t;

	t = NULL;
	if (!fname)
		return (NULL);
	if (!ft_strcmp(fname, "__last__"))
		return (list_logf);
	if (!list_logf)
		return ((list_logf = create_logf(fname)));
	else
		while (ft_strcmp(list_logf->fname, fname))
		{
			if (t == list_logf)
			{
				t = create_logf(fname);
				t->next = list_logf->next;
				t->prev = (t_list*)list_logf;
				if (t->next)
					t->next->prev = (t_list*)t;
				list_logf->next = (t_list*)t;
				return (t);
			}
			if (!t)
				t = list_logf;
			list_logf = (t_logf*)list_logf->next;
		}
	return (list_logf);
}

void	s_print_format(char *f, va_list ap, int fd)
{
	char	*s;
	int		d;

	if (*f == 's')
	{
		s = (char *)va_arg(ap, char *);
		if (s)
			ft_putstr_fd(s, fd);
		else
			ft_putstr_fd("(null)", fd);
	}
	else if (*f == 'd')
	{
		d = (int)va_arg(ap, int);
		ft_putnbr_fd(d, fd);
	}
	else if (*f == '%')
		ft_putchar_fd('%', fd);
}
