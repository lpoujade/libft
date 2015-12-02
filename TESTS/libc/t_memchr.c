#include "../test.h"

int		t_memchr(void)
{
	if (memcmp(ft_memchr("I live in the see !", 'e', 8), memchr("I live in the see !", 'e', 8), 5))
		return (1);
	if (memcmp(ft_memchr("word", '\0', 5), memchr("word", '\0', 5), 5))
		return (2);

	void *p;
	p = malloc(10);
	memset(p, '\0', 10);
	memset((p + 4), 'O', 1);

	if (memcmp(ft_memchr(p, 'O', 10), memchr(p, 'O', 10), 10))
		return (3);
	if (memcmp(ft_memchr(p, 'O', 5), memchr(p, 'O', 5), 5))
		return (4);
	if (ft_memchr("oh", 't', 3))
			return (5);

	free(p);
	return (0);
}
