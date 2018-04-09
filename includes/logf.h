/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes/logf.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liums <lpoujade@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 19:46:35 by liums             #+#    #+#             */
/*   Updated: 2018/04/09 11:34:28 by lpoujade         ###   ########.fr       */
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
int		logf_log_format(char *fname, char *msg_format, ...)__attribute__((format (printf, 2, 3)));
t_logf	*create_logf(char *fname);
t_logf	*use_logf(char *fname);
void	s_print_format(char *f, va_list ap, int fd);
#endif
