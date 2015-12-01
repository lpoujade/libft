#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
	ft_putendl("Compare libc's and libft's functions");


	ft_putstr("STRCHR : ");

	static char s_strchr[] = "Je suis un poisson.";
	char o_strchr = 'p';
	if (strcmp(ft_strchr(s_strchr, o_strchr), strchr(s_strchr, o_strchr)))
	{
		ft_putendl("NOT OK");
		ft_putstr("libc  : ");ft_putendl(strchr(s_strchr, o_strchr));
		ft_putstr("libft : ");ft_putendl(ft_strchr(s_strchr, o_strchr));
	}
	else
		ft_putendl("OK");


	ft_putstr("STRRCHR : ");

	static char s[] = "Je suis un poisson.";
	char o_strrchr = 'o';
	if (strcmp(ft_strrchr(s, o_strrchr), strrchr(s, o_strrchr)))
	{
		ft_putendl("NOT OK");
		ft_putstr("libc  : ");ft_putendl(strrchr(s, o_strrchr));
		ft_putstr("libft : ");ft_putendl(ft_strrchr(s, o_strrchr));
	}
	else
		ft_putendl("OK");


	ft_putstr("MEMCHR : ");

	char const *s_memchr = "words";
	char c_memchr = 'o';
	int len_memchr = 5;

	if (memcmp(ft_memchr(s_memchr, c_memchr, len_memchr), memchr(s_memchr, c_memchr, len_memchr), 5))
	{
		ft_putchar('\n');
		ft_putnbr(memcmp(ft_memchr(s_memchr, c_memchr, len_memchr), memchr(s_memchr, c_memchr, len_memchr), 5));
	}
	else
		ft_putendl("OK");


	ft_putstr("MEMCCPY : ");

	char	src_memccpy[] = "Ceci est un \200test.";
	char	dest[200];
	void	*p1, *p2;

	p1 = memccpy(dest, src_memccpy, '\200', 18);
	p2 = ft_memccpy(dest, src_memccpy, '\200', 18);

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


	ft_putstr("MEMCMP : ");

	char one_memcmp[] = "ab\0ab\0";
	char to_memcmp[] = "ab\0ab\0";
	int n = 0;

	if (memcmp(one_memcmp, to_memcmp, n) != ft_memcmp(one_memcmp, to_memcmp, n))
	{
		ft_putendl("NOT OK");
		ft_putstr("libc : ");
		ft_putnbr(memcmp(one_memcmp, to_memcmp, n));ft_putchar('\n');
		ft_putstr("libft : ");
		ft_putnbr(ft_memcmp(one_memcmp, to_memcmp, n));ft_putchar('\n');
	}
	else
		ft_putendl("OK");


	ft_putstr("STRSTR : ");

	char *str1_strstr = "some";
	char *str2_strstr = "";


	if (strcmp(ft_strstr(str1_strstr, str2_strstr), strstr(str1_strstr, str2_strstr)) != 0)
	{
		ft_putchar('\n');ft_putnbr(strcmp(ft_strstr(str1_strstr, str2_strstr), strstr(str1_strstr, str2_strstr)));ft_putchar('\n');
		ft_putstr("libc : ");ft_putendl(strstr(str1_strstr, str2_strstr));
		ft_putstr("libft : ");ft_putendl(ft_strstr(str1_strstr, str2_strstr));
	}
	else
		ft_putendl("OK");


/*
	ft_putstr("STRNSTR : ");

	char str1_strnstr[10]; bzero(str1_strnstr, 10);strcpy(str1_strnstr, "un deux 9");
	char *str2_strnstr = "deux 9";
	int n_strnstr = 5;


	if (strcmp(strnstr(str1_strnstr, str2_strnstr, n_strnstr), ft_strnstr(str1_strnstr, str2_strnstr, n_strnstr)) != 0)
	{
		ft_putendl("NOT OK");
		ft_putnbr(strcmp(ft_strnstr(str1_strnstr, str2_strnstr, n_strnstr), strnstr(str1_strnstr, str2_strnstr, n_strnstr)));ft_putchar('\n');
		ft_putstr("libc  : ");ft_putendl(strnstr(str1_strnstr, str2_strnstr, n_strnstr));
		ft_putstr("libft : ");ft_putendl(ft_strnstr(str1_strnstr, str2_strnstr, n_strnstr));
	}
	else
		ft_putendl("OK");
*/

	ft_putstr("STRCMP : ");ft_putchar('\n');
	char *str_strcmp = "\200";
	char *str2_strcmp = "\0";
	ft_putstr("libft : ");ft_putnbr(ft_strcmp(str_strcmp, str2_strcmp));ft_putchar('\n');
	ft_putstr("libc : ");ft_putnbr(strcmp(str_strcmp, str2_strcmp));ft_putchar('\n');


	ft_putstr("ATOI ( ascii to int ) : ");
	char *nbr = " \n\r  -+42 ergf ";
	ft_putchar('\n');
	ft_putstr("libft : ");ft_putnbr(ft_atoi(nbr));ft_putchar('\n');
	ft_putstr("libc : ");ft_putnbr(atoi(nbr));ft_putchar('\n');



	ft_putstr("STRNCPY : ");

	char *src_strncpy = "hey ho";
	int const len = 154;
	char dest_std[len];
	char dest_ft[len];

	if (memcmp(ft_strncpy(dest_ft, src_strncpy, len), strncpy(dest_std, src_strncpy, len), len))
	{
		ft_putendl("ERROR strncpy");
		ft_putendl(dest_ft);
		ft_putstr(dest_std);
		ft_putchar('\n');
		ft_putnbr(strcmp(dest_ft, dest_std));
	}
	else
		ft_putendl("OK");


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
