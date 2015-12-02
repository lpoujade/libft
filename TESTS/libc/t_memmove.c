#include "../test.h"

int		t_memmove(void)
{
	void *f_d, *c_d;
	f_d = malloc(30);
	c_d = malloc(30);
	
	char str[30] = "C'etait une blague, gamin !";
	
	if (memcmp(ft_memmove(f_d, str, 27), memmove(c_d, str, 27), 27))
		return (1);

	return (0);
}
