/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 tester.c											:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: lpoujade <lpoujade@student.42.fr>			+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2015/11/23 15:31:57 by lpoujade		   #+#	  #+#			  */
/*	 Updated: 2015/11/23 19:34:00 by lpoujade		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include	"libft.h"

int		main(int ac, char **av)
{
	int arg_number = ac-1;
	char **args = av;
	char *p;

	ft_putstr("work on last arg : ");
	ft_putendl(args[arg_number]);

	ft_putstr("strlen, putnbr : ");
	ft_putnbr(ft_strlen(args[arg_number]));
	ft_putchar('\n');

	ft_putstr("ft_memalloc, ft_strcpy : ft_strdup (ft_strnew) ... ");
	p = ft_strdup(args[arg_number]);
	ft_putendl(p);

	ft_putstr("ft_strcmp : diff with executable name (arg0: ");ft_putstr(args[0]);ft_putstr(") ... ");
	if (ft_strcmp(p, args[0]) == 0)
		ft_putendl("identicals");
	else
		ft_putendl("differents");
	ft_putstr("funct. result : ");ft_putnbr(ft_strcmp(p, args[0]));ft_putchar('\n');
	ft_putstr("voids compare ");ft_putnbr(ft_strcmp("", ""));ft_putchar('\n');

	ft_putstr("ft_strjoin ");ft_putstr(p); ft_putstr(" "); ft_putstr(args[0]);ft_putstr(" : ");
	ft_putendl(ft_strjoin(p, args[0]));

	char str[] = "some some";
	ft_putendl("before strclr");
	ft_putendl(str);
	ft_strclr(str);
	ft_putendl(str);

	ft_putendl("before strclr ( from prec : void, void )");
	ft_putendl(str);
	ft_strclr(str);
	ft_putendl(str);

//	KIFOIRENT
	ft_putstr("ft_strdel (ft_memdel) ... ");
	ft_strdel(&p);
	if (!p)
		ft_putendl("ok");
	else
	{
		ft_putstr("fail : ");
		ft_putendl(p);
		ft_putstr("len : ");
		ft_putnbr(ft_strlen(p));
	}
	return (0);
}
