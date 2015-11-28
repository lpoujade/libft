#include "../libft.h"

char	c2c(char c);

int main(void)
{
	char *src = "min mon MAJ";
	char *dst;
	dst = ft_strnew(ft_strlen(src));

	dst = ft_strmap(src, &c2c);
	ft_putnbr(ft_strlen(dst));
	ft_putendl(dst);
	return (0);
}
