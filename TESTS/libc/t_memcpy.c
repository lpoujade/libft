#include "../test.h"

int		t_memcpy(void)
{
	int ret = 0;
	void *src;
	src = malloc(20);
	memset(src, 'u', 20);
	memset((src + 5), 'e', 5);
	memset((src + 10), 't', 1);

	void *c_d, *f_d;
	c_d = malloc(20);
	f_d = malloc(20);

	if (memcmp(ft_memcpy(f_d, src, 20), memcpy(c_d, src, 20), 20))
	{
		ft_putendl_fd("FT_MEMCPY ERROR ON TEST 1", 2);
		ft_putstr_fd("libc\t: ", 2);ft_putstr_fd(memcpy(c_d, src, 20), 2);
		ft_putchar_fd('\n', 2);
		ft_putstr_fd("libft\t: ", 2);ft_putstr_fd(ft_memcpy(f_d, src, 20), 2);
		ft_putchar_fd('\n', 2);

		ret = 10;
	}
	if (memcmp(ft_memcpy(f_d, src, 20), memcpy(c_d, f_d, 20), 20))
	{

		ft_putendl_fd("FT_MEMCPY ERROR ON TEST 2", 2);
		ft_putstr_fd("libc\t: ", 2);ft_putstr_fd(memcpy(c_d, src, 20), 2);
		ft_putchar_fd('\n', 2);
		ft_putstr_fd("libft\t: ", 2);ft_putstr_fd(ft_memcpy(f_d, src, 20), 2);
		ft_putchar_fd('\n', 2);

		ret = ret + 2;
	}

	free(f_d); free(c_d);
	return (ret);
}
