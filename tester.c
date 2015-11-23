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
	int c;
	char *p;

	while (ac != 1)
	{
		ac--;
		av++;
	}
	c = sizeof(*av);
	p = ft_memalloc(c); /* or p = ft_memalloc(sizeof(*av));  ? */

	p = *av;

	ft_putstr(p);

	/*
	   ft_putstr("Test du ft_putstr :\n");
	   ft_putstr("42 ");
	   ft_putstr("´@");
	   ft_putstr("");

	   ft_putstr("\n\n--\n\n");

	   ft_putstr("Test du ft_strcpy :\n");
	   char *src, *dest;
	   dest = "eh";
	   src = "source --";
	 *dest = ft_strcpy(dest, src);
	 ft_putstr(src); ft_putchar('\n');
	 ft_putstr(dest); ft_putchar('\n');

	 ft_putstr("\n\n--\n\n");

	 ft_putstr("Test du ft_strlen et du ft_putnbr :\n");
	 int lenstr = ft_strlen("Et test du ft_putnbr");
	 ft_putnbr(lenstr);

	 ft_putstr("\n\n--\n\n");

	 ft_putstr("Test du ft_strcmp ( via les chaines copiees avec ft_strcpy ) :\n");
	 int ornot = ft_strcmp(src, dest);
	 ft_putnbr(ornot);
	 */

	return (0);
}
