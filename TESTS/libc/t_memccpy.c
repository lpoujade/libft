#include "../test.h"

int		t_memccpy(void)
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

	if (memcmp(ft_memccpy(f_d, src, 't', 20), memccpy(c_d, src, 't', 20), 20))
	{
		ft_putendl_fd("FT_MEMCCPY ERROR ON TEST 1", 2);
		ft_putstr_fd("libc\t: ", 2);ft_putstr_fd(c_d, 2);
		ft_putchar_fd('\n', 2);
		ft_putstr_fd("libft\t: ", 2);ft_putstr_fd(f_d, 2);
		ft_putchar_fd('\n', 2);
		ft_putstr_fd("memcmp said : ", 2); ft_putnbr_fd(memcmp(c_d, f_d, 20), 2);
		ret = 10;
	}
	if (ft_memccpy(f_d, src, 'o', 20))
		ret = ret + 2;

	free(f_d); free(c_d);
	return (ret);
}
