#include <stdio.h>
#include "libft.h"

int main(void)
{
	int myp = 0, p = 0;

	p = printf("str\n");
	myp = ft_printf("str\n");
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("str2: '%s'\n", "hello");
	myp = ft_printf("str2: '%s'\n", "hello");
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("strpad: '%10s'\n", "ho");
	myp = ft_printf("strpad: '%10s'\n", "ho");
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("int: %d\n", 42);
	myp = ft_printf("int: %d\n", 42);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("hex: %x\n", 42);
	myp = ft_printf("hex: %x\n", 42);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("hexprecleft: '%-12x'\n", 42);
	myp = ft_printf("hexprecleft: '%-12x'\n", 42);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("hexprec: '%12x'\n", 42);
	myp = ft_printf("hexprec: '%12x'\n", 42);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("cpad: '%12c'\n", 'a');
	myp = ft_printf("cpad: '%12c'\n", 'a');
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("cpadleft: '%-13c'\n", 'a');
	myp = ft_printf("cpadleft: '%-13c'\n", 'a');
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("strpadleft: '%-12s'\n", "uhoh");
	myp = ft_printf("strpadleft: '%-12s'\n", "uhoh");
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("intpadleft: '%-12d'\n", 987);
	myp = ft_printf("intpadleft: '%-12d'\n", 987);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("intpadright: '%12d'\n", 987);
	myp = ft_printf("intpadright: '%12d'\n", 987);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("pointer: %p\n", (void*)&main);
	myp = ft_printf("pointer: %p\n", (void*)&main);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("sizof: %#lx\n", (void*)&main);
	myp = ft_printf("sizof: %#lx\n", (void*)&main);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("%#08x\n", 42);
	myp = ft_printf("%#08x\n", 42);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("%08x\n", 42);
	myp = ft_printf("%08x\n", 42);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("%8x\n", 42);
	myp = ft_printf("%8x\n", 42);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("%8x\n", 42);
	myp = ft_printf("%8x\n", 42);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("%#8x\n", 42);
	myp = ft_printf("%#8x\n", 42);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("@moulitest: %5.d %5.0d\n", 0, 0);
	myp = ft_printf("@moulitest: %5.d %5.0d\n", 0, 0);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("intprec: %.d %.0d\n", 12, 42);
	myp = ft_printf("intprec: %.d %.0d\n", 12, 42);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("int0prec0: %.d %.0d\n", 0, 0);
	myp = ft_printf("int0prec0: %.d %.0d\n", 0, 0);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("strasint: %ju\n", "hello");
	myp = ft_printf("strasint: %ju\n", "hello");
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);
}
