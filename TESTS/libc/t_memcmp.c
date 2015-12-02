#include "../test.h"

int		t_memcmp(void)
{
	void *p1, *p2;
	p1 = malloc(20);
	p2 = malloc(20);
	memset(p1, '\n', 20);
	memset(p2, '\n', 20);memset((p2 + 10), '\200', 1);

	if (ft_memcmp(p1, p2, 20) != memcmp(p1, p2, 20))
		return (1);
	if (ft_memcmp(p1, p2, 9) != memcmp(p1, p2, 9))
		return (2);

	free(p1);free(p2);
	return (0);
}
