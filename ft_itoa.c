/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_itoa.c											:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: lpoujade <lpoujade@student.42.fr>			+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2015/11/24 18:49:07 by lpoujade		   #+#	  #+#			  */
/*	 Updated: 2015/11/24 21:34:54 by lpoujade		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int digits = 0;
	int tmp_n = n;
	while (tmp_n)
	{
		tmp_n = tmp_n / 10;
		digits++;
}

	ft_putstr("Mem allocation ( new str ) of : "); ft_putnbr(digits);
	//char *ret;
	//ret = ft_strnew(digits);
	//char t_char[digits];
	char *t_char;
	t_char = ft_strnew(digits);
	ft_putchar('\n');

	while (n)
	{
		ft_putstr("n : ");ft_putnbr(n);
		ft_putstr("  -- digits : ");ft_putnbr(digits);
		ft_putstr("  -- to *char : ");ft_putnbr(n % 10);
		ft_putstr("  -- ascii value : ");ft_putnbr('0' + n%10);
		ft_putstr("  -- ascii : ");ft_putchar('0' + n%10);ft_putchar('\n');
		t_char[digits] = '0' + (n % 10);
		n = n / 10;
		digits--;
		ft_putstr("End while, t_char[digits] : ");ft_putchar(t_char[digits]);
		ft_putchar('\n');ft_putchar('\n');
	}
	//ret = ft_strdup(t_char);
	return (t_char);
}
