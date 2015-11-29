
#include "../libft.h"

int main(void)
{
	char *str;

	str = ft_strnew(20);

	*str = 'A';
	*(str + 19) = 'B';

	ft_putchar(*str);
	ft_putchar(*(str+19));
	ft_putchar('\n');

	ft_strdel(&str);

	ft_putchar(*str);
	ft_putchar(*(str+19));
	ft_putchar('\n');
	
	if (!str)
		return (0);
	else
		return (1);
}
