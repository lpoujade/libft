/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logf.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpoujade <lpoujade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/19 11:33:22 by lpoujade          #+#    #+#             */
/*   Updated: 2016/10/19 11:38:00 by lpoujade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "logf.h"

int				logf_quit(void)
{
	t_logf	*t;
	t_logf	*n;
	t_logf	*o;
	int		errcount;

	errcount = 0;
	o = NULL;
	if (!(t = use_logf("__last__")))
		ft_putendl_fd("logf_quit: can't retrieve logf's list", 2);
	while (t != o)
	{
		if (!o)
			o = t;
		n = (t_logf*)t->next;
		ft_strdel(&t->fname);
		if (close(t->fd))
			errcount++;
		ft_memdel((void**)&t);
		t = n;
	}
	return (errcount);
}

int				logf_log(char *fname, char *msg)
{
	t_logf	*list_logf;

	if (!(list_logf = use_logf(fname)))
	{
		ft_putendl_fd("LOGF error: can't retrieve/create log file", 2);
		return (-1);
	}
	ft_putstr_fd(msg, list_logf->fd);
	return (0);
}

int				logf_log_format(char *fname, char *msg_format, ...)
{
	unsigned int	next;
	int				i;
	t_logf			*l;
	va_list			ap;
	char			*tmp;

	i = 0;
	va_start(ap, msg_format);
	if (!(l = use_logf(fname)))
		return (-1);
	while (msg_format[i])
	{
		next = ft_strclchr(msg_format + i, '%');
		if (next == ft_strlen(msg_format + i))
		{
			ft_putstr_fd(msg_format + i, l->fd);
			break ;
		}
		if (next > 0)
		{
			tmp = ft_strsub(msg_format + i, 0, next);
			ft_putstr_fd(tmp, l->fd);
			ft_strdel(&tmp);
		}
		s_print_format(msg_format + i + next + 1, ap, l->fd);
		i += next + 2;
	}
	va_end(ap);
	return (0);
}

int				logf_getfd(char *fname)
{
	t_logf	*list_logf;

	if (!(list_logf = use_logf(fname)))
	{
		ft_putendl_fd("LOGF error: can't retrieve/create log file", 2);
		return (-1);
	}
	return (list_logf->fd);
}
