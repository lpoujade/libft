#include "../test.h"

int		t_isit(void)
{
	int ret;
	int t = '\0';

	while (t <= 127)
	{
		ret = 0;

		if (ft_isascii(t) != isascii(t))
			ret = 100000;

		if (ft_isupper(t) != isupper(t))
			ret = ret + 20000;

		if (ft_isalnum(t) != isalnum(t))
			ret = ret + 3000;

		if (ft_isalpha(t) != isalpha(t))
			ret = ret + 400;

		if (ft_isprint(t) != isprint(t))
			ret = ret + 50;

		if (ft_isdigit(t) != isdigit(t))
			ret = ret + 6;

		if (ret)
		{
			
			ft_putstr_fd("FT_ISx ERROR on char ", 2);ft_putnbr_fd(t, 2);
			ft_putstr_fd(" - which is ", 2);ft_putchar_fd(t, 2);
			ft_putchar_fd('\n', 2);

			return (ret);
		}
		t++;
	}
	return (ret);
}
