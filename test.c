#include <stdio.h>
#include <locale.h>
#include "libft.h"

int main(void)
{
	setlocale(LC_ALL, "");
	printf("lc:%lc\n", L'α');
	ft_printf("Lchar:%lc\nchar:%c\n", L'α', 'a');
}