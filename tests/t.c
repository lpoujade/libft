#include <stdio.h>
#include "libft.h"

int main()
{
	ft_printf("#.8hhX:\n%#.8hhX\n", 12);
	printf("%#.8hhX\n", 12);

	ft_printf("' .6hhX':\n% .6hhX\n", 1337);
	printf("% .6hhX\n", 1337);

	ft_printf("'#0 .9hhx':\n%#0 .9hhx\n", 4577);
	printf("%#0 .9hhx\n", 4577);

	ft_printf("@moulitest: %#.o %#.0o\n", 0, 0);
	printf("@moulitest: %#.o %#.0o\n", 0, 0);
}
