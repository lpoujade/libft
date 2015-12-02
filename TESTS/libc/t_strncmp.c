#include "../test.h"

int		t_strncmp(void)
{
	int ret = 0;

	if (ft_strncmp("this", "this", 4) != strncmp("this", "this", 4))
	{
		ft_putendl_fd("FT_STRNCMP ERROR ON TEST 1", 2);
		ft_putstr_fd("libc\t: ", 2);ft_putnbr_fd(strncmp("this", "this", 4), 2);
		ft_putchar_fd('\n', 2);
		ft_putstr_fd("libft\t: ", 2);ft_putnbr_fd(ft_strncmp("this", "this", 4), 2);
		ft_putchar_fd('\n', 2);
		ret = 1000;	
	}
	if (ft_strncmp("", "this", 4) != strncmp("", "this", 4))
	{
		ft_putendl_fd("FT_STRNCMP ERROR ON TEST 2", 2);
		ft_putstr_fd("libc\t: ", 2);ft_putnbr_fd(strncmp("", "this", 4), 2);
		ft_putchar_fd('\n', 2);
		ft_putstr_fd("libft\t: ", 2);ft_putnbr_fd(ft_strncmp("", "this", 4), 2);
		ft_putchar_fd('\n', 2);

		ret = ret + 200;
	}
	if (ft_strncmp("so\200is", "<that\0", 10) != strncmp("so\200is", "<that\0", 10))
		ret = ret + 30;
	if (ft_strncmp("so\200is", "<that\0", 0) != strncmp("so\200is", "<that\0", 0))
		ret = ret + 4;

	return (ret);
}
