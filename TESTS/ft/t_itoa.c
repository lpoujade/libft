#include "../test.h"

void	t_itoa(void)
{
	ft_putchar('\n');ft_putchar('\t');
	ft_putendl(ft_itoa(-32768));

	ft_putchar('\t');
	ft_putendl(ft_itoa(0));

	ft_putchar('\t');
	ft_putendl(ft_itoa(10));

	ft_putchar('\t');
	ft_putendl(ft_itoa(32768));
}
