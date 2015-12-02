#include "test.h"

int main(void)
{
	ft_putendl("Compare libc's and libft's functions");
	ft_putchar('\n');
	int res = 0;


	ft_putstr("MEMCHR\t: ");
	if ((res = t_memchr()))
	{
		ft_putstr("FAILED, test ");
		ft_putnbr(res);ft_putchar('\n');
	}
	else
		ft_putendl("OK");

	ft_putstr("MEMCPY\t: ");
	if ((res = t_memcpy()))
	{
		ft_putstr("FAILED, test ");
		ft_putnbr(res);ft_putchar('\n');
	}
	else
		ft_putendl("OK");

	ft_putstr("MEMCCPY\t: ");
	if ((res = t_memccpy()))
	{
		ft_putstr("FAILED, test ");
		ft_putnbr(res);ft_putchar('\n');
	}
	else
		ft_putendl("OK");

	ft_putstr("MEMMOVE\t: ");
	if ((res = t_memmove()))
	{
		ft_putstr("FAILED, test ");
		ft_putnbr(res);ft_putchar('\n');
	}
	else
		ft_putendl("OK");

	ft_putstr("MEMCMP\t: ");
	if ((res = t_memcmp()))
	{
		ft_putstr("FAILED, test ");
		ft_putnbr(res);ft_putchar('\n');
	}


	else
		ft_putendl("OK");
	ft_putstr("STRCHR\t: ");
	if ((res = t_strchr()))
	{
		ft_putstr("FAILED, test ");
		ft_putnbr(res);ft_putchar('\n');
	}
	else
		ft_putendl("OK");


	ft_putstr("STRRCHR\t: ");
	if ((res = t_strrchr()))
	{
		ft_putstr("FAILED, test ");
		ft_putnbr(res);ft_putchar('\n');
	}
	else
		ft_putendl("OK");

	ft_putstr("STRSTR\t: ");
	if ((res = t_strstr()))
	{
		ft_putstr("FAILED, test ");
		ft_putnbr(res);ft_putchar('\n');
	}
	else
		ft_putendl("OK");

	ft_putstr("STRNSTR\t: ");
	if ((res = t_strnstr()))
	{
		ft_putstr("FAILED, test ");
		ft_putnbr(res);ft_putchar('\n');
	}
	else
		ft_putendl("OK");


	ft_putstr("STRCMP\t: ");
	if ((res = t_strcmp()))
	{
		ft_putstr("FAILED, test ");
		ft_putnbr(res);ft_putchar('\n');
	}
	else
		ft_putendl("OK");

	ft_putstr("STRNCMP\t: ");
	if ((res = t_strncmp()))
	{
		ft_putstr("FAILED, test ");
		ft_putnbr(res);ft_putchar('\n');
	}
	else
		ft_putendl("OK");

	ft_putstr("STRCPY\t: ");
	if ((res = t_strcpy()))
	{
		ft_putstr("FAILED, test ");
		ft_putnbr(res);ft_putchar('\n');
	}
	else
		ft_putendl("OK");

	ft_putstr("STRNCPY\t: ");
	if ((res = t_strncpy()))
	{
		ft_putstr("FAILED, test ");
		ft_putnbr(res);ft_putchar('\n');
	}
	else
		ft_putendl("OK");

	ft_putstr("STRLEN\t: ");
	if ((res = t_strlen()))
	{
		ft_putstr("FAILED, test ");
		ft_putnbr(res);ft_putchar('\n');
	}
	else
		ft_putendl("OK");

	ft_putstr("STRCAT\t: ");
	if ((res = t_strcat()))
	{
		ft_putstr("FAILED, test ");
		ft_putnbr(res);ft_putchar('\n');
	}
	else
		ft_putendl("OK");

	ft_putstr("STRNCAT\t: ");
	if ((res = t_strncat()))
	{
		ft_putstr("FAILED, test ");
		ft_putnbr(res);ft_putchar('\n');
	}
	else
		ft_putendl("OK");

	ft_putstr("STRLCAT\t: ");
	if ((res = t_strlcat()))
	{
		ft_putstr("FAILED, test ");
		ft_putnbr(res);ft_putchar('\n');
	}
	else
		ft_putendl("OK");

	ft_putstr("STRDUP\t: ");
	if ((res = t_strdup()))
	{
		ft_putstr("FAILED, test ");
		ft_putnbr(res);ft_putchar('\n');
	}
	else
		ft_putendl("OK");

	ft_putstr("ATOI\t: ");
	if ((res = t_atoi()))
	{
		ft_putstr("FAILED, test ");
		ft_putnbr(res);ft_putchar('\n');
	}
	else
		ft_putendl("OK");
//	ft_putstr("IS?\t: ");
//	if ((res = t_is()))
//	{
//		ft_putstr("FAILED, test ");
//		ft_putnbr(res);ft_putchar('\n');
//	}
//	else
//		ft_putendl("OK");
//
	ft_putchar('\n');
	ft_putendl("FT ONLY FUNCTIONS");
	ft_putstr("ITOA :");
	t_itoa();

	return (0);
}
