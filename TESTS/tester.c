#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
	ft_putendl("Compare libc's and libft's functions");

/*
	ft_putstr("STRCHR : ");

	static char s[] = "Je suis un poisson.";
	char o = 'p';
	if (strcmp(ft_strchr(s, o), strchr(s, o)))
	{
		ft_putendl("NOT OK");
		ft_putstr("libc  : ");ft_putendl(strchr(s, o));
		ft_putstr("libft : ");ft_putendl(ft_strchr(s, o));
	}
	else
		ft_putendl("OK");
*/
/*
	ft_putstr("STRRCHR : ");

	static char s[] = "Je suis un poisson.";
	char o = 'x';
	if (strcmp(ft_strrchr(s, o), strrchr(s, o)))
	{
		ft_putendl("NOT OK");
		ft_putstr("libc  : ");ft_putendl(strrchr(s, o));
		ft_putstr("libft : ");ft_putendl(ft_strrchr(s, o));
	}
	else
		ft_putendl("OK");
*/
/*
	ft_putstr("MEMCHR : ");

	char const *s = "words";ft_memchr(s, 't', 5);
		ft_putendl("O");
	if (memcmp(ft_memchr(s, 'o', 5), memchr(s, 't', 5), 5))
	{
		ft_putchar('\n');
		ft_putnbr(memcmp(ft_memchr(s, 't', 5), memchr(s, 't', 5), 5));
	}
	else
		ft_putendl("OK");
*/
	/*
	ft_putstr("MEMCCPY : ");

	char	src[] = "Ceci est un \200test.";
	char	dest[200];
	void	*p1, *p2;

	p1 = memccpy(dest, src, '\200', 18);
	p2 = ft_memccpy(dest, src, '\200', 18);

	if (memcmp(p1, p2, 18))
	{
		ft_putchar('\n');
		ft_putnbr(memcmp(p1, p2, 18));
		ft_putchar('\n');
		//ft_putstr("libc  : ");ft_putendl((char *)p1);
		//ft_putstr("libft : ");ft_putendl((char *)p2);
		
	}
	else
		ft_putendl("OK");
*/
/*
	ft_putstr("MEMCMP : ");

	char one[] = "ab\0ab\0";
	char to[] = "ab\0ab\0";
	int n = 0;

	if (memcmp(one, to, n) != ft_memcmp(one, to, n))
	{
		ft_putendl("NOT OK");
		ft_putstr("libc : ");
		ft_putnbr(memcmp(one, to, n));ft_putchar('\n');
		ft_putstr("libft : ");
		ft_putnbr(ft_memcmp(one, to, n));ft_putchar('\n');
	}
	else
		ft_putendl("OK");
*/
/*
	ft_putstr("STRSTR : ");

	char *str1 = "some";
	char *str2 = "";


	if (strcmp(ft_strstr(str1, str2), strstr(str1, str2)) != 0)
	{
		ft_putchar('\n');ft_putnbr(strcmp(ft_strstr(str1, str2), strstr(str1, str2)));ft_putchar('\n');
		ft_putstr("libc : ");ft_putendl(strstr(str1, str2));
		ft_putstr("libft : ");ft_putendl(ft_strstr(str1, str2));
	}
	else
		ft_putendl("OK");

*/
/*
	ft_putstr("STRNSTR : ");

	char str1[10]; bzero(str1, 10);strcpy(str1, "un deux 9");
	char *str2 = "deux 9";
	int n = 5;


	if (strcmp(strnstr(str1, str2, n), ft_strnstr(str1, str2, n)) != 0)
	{
		ft_putendl("NOT OK");
		ft_putnbr(strcmp(ft_strnstr(str1, str2, n), strnstr(str1, str2, n)));ft_putchar('\n');
		ft_putstr("libc  : ");ft_putendl(strnstr(str1, str2, n));
		ft_putstr("libft : ");ft_putendl(ft_strnstr(str1, str2, n));
	}
	else
		ft_putendl("OK");
		*/
	/*
	ft_putstr("STRCMP : ");ft_putchar('\n');
	char *str = "\200";
	char *str2 = "\0";
	ft_putstr("libft : ");ft_putnbr(ft_strcmp(str, str2));ft_putchar('\n');
	ft_putstr("libc : ");ft_putnbr(strcmp(str, str2));ft_putchar('\n');
*/
/*
	ft_putstr("ATOI ( ascii to int ) : ");
	char *nbr = " \n\r  -+42 ergf ";
	ft_putchar('\n');
	ft_putstr("libft : ");ft_putnbr(ft_atoi(nbr));ft_putchar('\n');
	ft_putstr("libc : ");ft_putnbr(atoi(nbr));ft_putchar('\n');
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
