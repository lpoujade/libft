#include <stdio.h>
#include <locale.h>
#include "libft.h"

int main(void)
{
	setlocale(LC_ALL, "");
	printf("%lc\n", L'ï');
	ft_printf("Lchar: %lc\nchar: %c\n", L'ï', 'a');
}
