#include "../libft.h"

int main(void)
{
	void *src;
	void *dst;

	char *final;

	dst = ft_memalloc(10);
	src = "one ";
	final = (char *)ft_memcpy(dst, src, 5);
	if (!final)
		ft_putendl("NOTHING");
	else
		ft_putendl(final);

	return (0);
}
