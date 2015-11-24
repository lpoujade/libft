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
	void *p;
	int compare;

	while (ac != 1)
	{
		ac--;
		av++;
	}

	ft_putstr("work on last arg : ");
	ft_putendl(*av);

	ft_putstr("strlen, putnbr : ");
	ft_putnbr(ft_strlen(*av));
	ft_putchar('\n');

	ft_putstr("memalloc from sizeof(last_arg) ... ");
	p = ft_memalloc(sizeof(*av));
	if (p)
		ft_putendl("ok");
	else
		ft_putendl("fail");

	ft_putstr("ft_strcpy to new *p ... ");
	ft_strcpy(p, *av);
	ft_putendl(p);

	ft_putstr("ft_strcmp : ");
	compare = ft_strcmp(p, "one45");
	ft_putnbr(compare);
	ft_putchar('\n');

	ft_putstr("ft_memdel ... ");
	ft_memdel(p);
	if (!p)
		ft_putendl("ok");
	else
	{
		ft_putendl("fail");
		ft_putendl(p);
	}



		/*
	 ft_putstr("Test du ft_strcmp ( via les chaines copiees avec ft_strcpy ) :\n");
	 int ornot = ft_strcmp(src, dest);
	 ft_putnbr(ornot);
	 */

	return (0);
}
