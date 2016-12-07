#include <stdio.h>
#include "libft.h"

int main(void)
{
	int myp = 0, p = 0;

	p = printf("%%*s: %*s\n", NULL);
	myp = ft_printf("%%*s: %*s\n", NULL);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("%%*s: %*s\n", "HELLO");
	myp = ft_printf("%%*s: %*s\n", "HELLO");
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

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

	p = printf("%%12d: '%12d'\n", 987);
	myp = ft_printf("%%12d: '%12d'\n", 987);
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

	p = printf("octal: %o\n", 42);
	myp = ft_printf("octal: %o\n", 42);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("octallong: %llo\n", 4242424242424242424);
	myp = ft_printf("octallong: %llo\n", 4242424242424242424);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("owtf: %#zo\n", "hello");
	myp = ft_printf("owtf: %#zo\n", "hello");
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("int+: %+d\n", 12);
	myp = ft_printf("int+: %+d\n", 12);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("int<   >+: %  +d\n", 12);
	myp = ft_printf("int<   >+: %  +d\n", 12);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("%-5.2s is a string\n", "");
	myp = ft_printf("%-5.2s is a string\n", "");
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("@moulitest: %5.0d\n", 0);
	myp = ft_printf("@moulitest: %5.0d\n", 0, 0);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("@moulitest: %5.d\n", 0);
	myp = ft_printf("@moulitest: %5.d\n", 0);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("nullptr: %s\n", 0);
	myp = ft_printf("nullptr: %s\n", 0);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("0hexalt: %#x\n", 0);
	myp = ft_printf("0hexalt: %#x\n", 0);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("0hex: %x\n", 0);
	myp = ft_printf("0hex: %x\n", 0);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("0hexaltprec: %#.x\n", 0);
	myp = ft_printf("0hexaltprec: %#.x\n", 0);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("voidstrprec: %.2s\n", "");
	myp = ft_printf("voidstrprec: %.2s\n", "");
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("%%.2s: '%.2s'\n", "");
	myp = ft_printf("%%.2s: '%.2s'\n", "");
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("%%5.2s: '%5.2s'\n", "this");
	myp = ft_printf("%%5.2s: '%5.2s'\n", "this");
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("%%-5.2s: '%-5.2s'\n", "this");
	myp = ft_printf("%%-5.2s: '%-5.2s'\n", "this");
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("%%o: '%o'\n", 40);
	myp = ft_printf("%%o: '%o'\n", 40);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("%%-5o: '%-5o'\n", 2500);
	myp = ft_printf("%%-5o: '%-5o'\n", 2500);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("%%-5d: '%-5d'\n", 2500);
	myp = ft_printf("%%-5d: '%-5d'\n", 2500);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("%%#6o: '%#6o'\n", 2500);
	myp = ft_printf("%%#6o: '%#6o'\n", 2500);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("%%0+5d: '%0+5d'\n", 42);
	myp = ft_printf("%%0+5d: '%0+5d'\n", 42);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("%% 10.5d: '% 10.5d'\n", 4242);
	myp = ft_printf("%% 10.5d: '% 10.5d'\n", 4242);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);

	p = printf("%%10.5d: '%10.5d'\n", 4242);
	myp = ft_printf("%%10.5d: '%10.5d'\n", 4242);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p);
}
