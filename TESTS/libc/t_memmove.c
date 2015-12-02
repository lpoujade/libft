#include "../test.h"

int		t_memmove(void)
{
	int ret = 0;
	void *f_d, *c_d;
	f_d = malloc(30);
	c_d = malloc(30);
	
	char str[30] = "C'etait une blague, gamin !";
	char str2[27] = "\0\t\200la 1ere &ON NE PARLE PAS"; 
	
	if (memcmp(ft_memmove(f_d, str, 27), memmove(c_d, str, 27), 27))
		ret = 10;

	if (memcmp(ft_memmove(f_d, str2, 27), memmove(c_d, str2, 27), 27))
		ret = ret + 2;

	return (ret);
}
