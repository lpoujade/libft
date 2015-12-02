#include "../test.h"

int		t_memcpy(void)
{
	void *src;
	src = malloc(20);
	memset(src, 'u', 20);
	memset((src + 5), 'e', 5);
	memset((src + 10), 't', 1);

	void *c_d, *f_d;
	c_d = malloc(20);
	f_d = malloc(20);

	if (memcmp(ft_memcpy(f_d, src, 20), memcpy(c_d, src, 20), 20))
		return (1);
	if (ft_memcpy(f_d, src, 20))
		return (2);

	free(f_d); free(c_d);
	return (0);
}
