/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes/logf.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liums <lpoujade@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 19:46:35 by liums             #+#    #+#             */
/*   Updated: 2016/10/01 19:46:35 by liums            ###   ######## fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGF_H
# define LOGF_H

# include <fcntl.h>
# include <stdarg.h>
# include "libft.h"

typedef struct	s_logf
{
	t_list		*next;
	t_list		*prev;
	char		*fname;
	char		pad[4];
	int			fd;
}				t_logf;

int		logf_log(char *fname, char *msg);
int		logf_quit(void);
int		logf_getfd(char *fname);
int		logf_log_format(char *fname, char *msg_format, ...);

#endif
