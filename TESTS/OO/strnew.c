#include "../libft.h"
int main(void)
{
//	char *str = "123456789000000";
	char *str;
	str = ft_strnew(19);

	ft_putendl(str);

	str[0] = 'O';
	ft_putendl(str);

	*(str + 1) = 'U';
	ft_putendl(str);

	str = "--345";
	ft_putendl(str);

	str = "1234567890000";
	ft_putendl(str);

	return (0);
}
