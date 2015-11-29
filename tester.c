#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
	ft_putendl("Compare libc's and libft's functions");


	ft_putstr("STRCMP : ");ft_putchar('\n');
	char *str = "abc\200";
	char *str2 = "abc\200";
	ft_putstr("libft : ");ft_putnbr(ft_strcmp(str, str2));ft_putchar('\n');
	ft_putstr("libc : ");ft_putnbr(strcmp(str, str2));ft_putchar('\n');

/*
	ft_putstr("ATOI ( ascii to int ) : ");
	char *nbr = "\f42";
	ft_putnbr(atoi(nbr));
	ft_putchar('\n');
*/
/*

	ft_putstr("STRNCPY : ");

	char *src = "hey ho";
	int const len = 154;
	char dest_std[len];
	char dest_ft[len];

	if (memcmp(ft_strncpy(dest_ft, src, len), strncpy(dest_std, src, len), len))
	{
		ft_putendl("ERROR strncpy");
		ft_putendl(dest_ft);
		ft_putstr(dest_std);
		ft_putchar('\n');
		ft_putnbr(strcmp(dest_ft, dest_std));
	}
	else
		ft_putendl("OK");
*/

/*	BAD
	ft_putstr("MEMSET : ");

	void *ptr_ft;
	void *ptr_std;
	size_t len = 0;
	ptr_std = malloc(len);
	ptr_ft = malloc(len);
	memset(ptr_std, 'u',len);
	ft_memset(ptr_ft, 'u', len);

	if (memcmp(ptr_ft, ptr_std, len) != 0)
	{
		ft_putendl("ERROR memset");
		ft_putnbr(memcmp(ptr_ft, ptr_std, len));ft_putchar('\n');
		ft_putendl(ptr_std);
		ft_putendl(ptr_ft);
	}
	else
		ft_putendl("OK");

	ft_memdel(&ptr_std);ft_memdel(&ptr_ft);
*/

/* UGLY
	char alph;
	alph = '\0';
	while (alph < 'z' + 20)
	{
		ft_putchar(alph);
		ft_putchar('\n');
		ft_putchar('\n');

		ft_putstr("ISACII : ");

		if (ft_isascii(alph) != isascii(alph))
		{
		ft_putchar('\n');
			ft_putstr("libc : ");
			ft_putnbr(isascii(alph));
			ft_putchar('\n');
			ft_putstr("libft : ");
			ft_putnbr(ft_isascii(alph));
			ft_putchar('\n');
			ft_putchar('\n');
		}
		else
			ft_putendl("OK");

		// ---------------------------------
		ft_putstr("ISUPPER : ");

		if (ft_isupper(alph) != isupper(alph))
		{
		ft_putchar('\n');
			ft_putstr("libc : ");
			ft_putnbr(isupper(alph));
			ft_putchar('\n');
			ft_putstr("libft : ");
			ft_putnbr(ft_isupper(alph));
			ft_putchar('\n');
			ft_putchar('\n');
		}
		else
			ft_putendl("OK");

		// ---------------------------------
		ft_putstr("ISALNUM : ");

		if (ft_isalnum(alph) != isalnum(alph))
		{
		ft_putchar('\n');
			ft_putstr("libc : ");
			ft_putnbr(isalnum(alph));
			ft_putchar('\n');
			ft_putstr("libft : ");
			ft_putnbr(ft_isalnum(alph));
			ft_putchar('\n');
			ft_putchar('\n');
		}
		else
			ft_putendl("OK");

		// ---------------------------------
		ft_putstr("ISALPHA : ");

		if (ft_isalpha(alph) != isalpha(alph))
		{
		ft_putchar('\n');
			ft_putstr("libc : ");
			ft_putnbr(isalpha(alph));
			ft_putchar('\n');
			ft_putstr("libft : ");
			ft_putnbr(ft_isalnum(alph));
			ft_putchar('\n');
			ft_putchar('\n');
		}
		else
			ft_putendl("OK");

		// ---------------------------------
		ft_putstr("ISPRINT : ");

		if (ft_isprint(alph) != isprint(alph))
		{
		ft_putchar('\n');
			ft_putstr("libc : ");
			ft_putnbr(isprint(alph));
			ft_putchar('\n');
			ft_putstr("libft : ");
			ft_putnbr(ft_isprint(alph));
			ft_putchar('\n');
			ft_putchar('\n');
		}
		else
			ft_putendl("OK");

		// ---------------------------------
		ft_putstr("ISDIGIT : ");

		if (ft_isdigit(alph) != isdigit(alph))
		{
		ft_putchar('\n');
			ft_putstr("libc : ");
			ft_putnbr(isdigit(alph));
			ft_putchar('\n');
			ft_putstr("libft : ");
			ft_putnbr(ft_isdigit(alph));
			ft_putchar('\n');
			ft_putchar('\n');
		}
		else
			ft_putendl("OK");

		alph++;
	}
*/

	return (0);
}
