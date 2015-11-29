
#include <stdio.h>
#include "../libft.h"

int main(void)
{
	ft_putstr("LIBC : ");
	ft_putnbr(memcmp("ABA", "BAA", 3));
	ft_putchar('\n');

	ft_putstr("LIBFT : ");
	ft_putnbr(ft_memcmp("ABA", "BAA", 3));
	ft_putchar('\n');


	return (0);
}
