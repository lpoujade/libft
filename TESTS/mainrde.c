#include "libft.h"
int main(void)
{
	char *tmp;
	char **t;
	t = NULL;

	tmp = ft_strnew(20);
	ft_putendl("DDD");
	t = &tmp;
	t++;
	t = &tmp;
	ft_putendl("FFF");
	return (0);
}
