#include "../test.h"

int		t_is(void)
{

	unsigned char alph;
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
