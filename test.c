#include <stdio.h>
#include "libft.h"
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");

	int myp = 0, p = 0;

	p = printf("%%s null: %s\n", NULL);
	myp = ft_printf("%%s null: %s\n", NULL);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("%%s: %s\n", "HELLO");
	myp = ft_printf("%%s: %s\n", "HELLO");
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("str\n");
	myp = ft_printf("str\n");
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("str2: '%s'\n", "hello");
	myp = ft_printf("str2: '%s'\n", "hello");
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("strpad: '%10s'\n", "ho");
	myp = ft_printf("strpad: '%10s'\n", "ho");
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("int: %d\n", 42);
	myp = ft_printf("int: %d\n", 42);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("hex: %x\n", 42);
	myp = ft_printf("hex: %x\n", 42);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("hexprecleft: '%-12x'\n", 42);
	myp = ft_printf("hexprecleft: '%-12x'\n", 42);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("hexprec: '%12x'\n", 42);
	myp = ft_printf("hexprec: '%12x'\n", 42);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("cpad: '%12c'\n", 'a');
	myp = ft_printf("cpad: '%12c'\n", 'a');
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("cpadleft: '%-13c'\n", 'a');
	myp = ft_printf("cpadleft: '%-13c'\n", 'a');
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("strpadleft: '%-12s'\n", "uhoh");
	myp = ft_printf("strpadleft: '%-12s'\n", "uhoh");
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("intpadleft: '%-12d'\n", 987);
	myp = ft_printf("intpadleft: '%-12d'\n", 987);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("%%12d: '%12d'\n", 987);
	myp = ft_printf("%%12d: '%12d'\n", 987);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("pointer: %p\n", (void*)&main);
	myp = ft_printf("pointer: %p\n", (void*)&main);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("%#08x\n", 42);
	myp = ft_printf("%#08x\n", 42);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("%08x\n", 42);
	myp = ft_printf("%08x\n", 42);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("%8x\n", 42);
	myp = ft_printf("%8x\n", 42);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("%8x\n", 42);
	myp = ft_printf("%8x\n", 42);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("%#8x\n", 42);
	myp = ft_printf("%#8x\n", 42);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("@moulitest: %5.d %5.0d\n", 0, 0);
	myp = ft_printf("@moulitest: %5.d %5.0d\n", 0, 0);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("intprec: %.d %.0d\n", 12, 42);
	myp = ft_printf("intprec: %.d %.0d\n", 12, 42);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("int0prec0: %.d %.0d\n", 0, 0);
	myp = ft_printf("int0prec0: %.d %.0d\n", 0, 0);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("octal: %o\n", 42);
	myp = ft_printf("octal: %o\n", 42);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("octallong: %lo\n", 4242424242424242424);
	myp = ft_printf("octallong: %lo\n", 4242424242424242424);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("int+: %+d\n", 12);
	myp = ft_printf("int+: %+d\n", 12);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("int<   >+: %+d\n", 12);
	myp = ft_printf("int<   >+: %+d\n", 12);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("%-5.2s is a string\n", "");
	myp = ft_printf("%-5.2s is a string\n", "");
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("@moulitest: %5.0d\n", 0);
	myp = ft_printf("@moulitest: %5.0d\n", 0);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("@moulitest: %5.d\n", 0);
	myp = ft_printf("@moulitest: %5.d\n", 0);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("nullptr: %s\n", (void*)0);
	myp = ft_printf("nullptr: %s\n", (void*)0);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("0hexalt: %#x\n", 0);
	myp = ft_printf("0hexalt: %#x\n", 0);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("0hex: %x\n", 0);
	myp = ft_printf("0hex: %x\n", 0);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("0hexaltprec: %#.x\n", 0);
	myp = ft_printf("0hexaltprec: %#.x\n", 0);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("voidstrprec: %.2s\n", "");
	myp = ft_printf("voidstrprec: %.2s\n", "");
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("%%.2s: '%.2s'\n", "");
	myp = ft_printf("%%.2s: '%.2s'\n", "");
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("%%5.2s: '%5.2s'\n", "this");
	myp = ft_printf("%%5.2s: '%5.2s'\n", "this");
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("%%-5.2s: '%-5.2s'\n", "this");
	myp = ft_printf("%%-5.2s: '%-5.2s'\n", "this");
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("%%o: '%o'\n", 40);
	myp = ft_printf("%%o: '%o'\n", 40);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("%%-5o: '%-5o'\n", 2500);
	myp = ft_printf("%%-5o: '%-5o'\n", 2500);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("%%-5d: '%-5d'\n", 2500);
	myp = ft_printf("%%-5d: '%-5d'\n", 2500);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("%%#6o: '%#6o'\n", 2500);
	myp = ft_printf("%%#6o: '%#6o'\n", 2500);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("%%0+5d: '%0+5d'\n", 42);
	myp = ft_printf("%%0+5d: '%0+5d'\n", 42);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("%% 10.5d: '% 10.5d'\n", 4242);
	myp = ft_printf("%% 10.5d: '% 10.5d'\n", 4242);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("%%10.5d: '%10.5d'\n", 4242);
	myp = ft_printf("%%10.5d: '%10.5d'\n", 4242);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("%+d\n", 0);
	myp = ft_printf("%+d\n", 0);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("%%03.2u: %03.2u\n", 42);
	myp = ft_printf("%%03.2u: %03.2u\n", 42);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("%%p null: %p\n", &main);
	myp = ft_printf("%%p null: %p\n", &main);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("%%u : %u\n", 0);
	myp = ft_printf("%%u : %u\n", 0);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("%%u : %u\n", 10);
	myp = ft_printf("%%u : %u\n", 10);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("%-10s is a string\n", "this");
	myp = ft_printf("%-10s is a string\n", "this");
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("%+5d\n", 42);
	myp = ft_printf("%5d\n", 42);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("%-5d\n", 42);
	myp = ft_printf("%-5d\n", 42);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("%05d\n", 42);
	myp = ft_printf("%05d\n", 42);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("%0+5d\n", 42);
	myp = ft_printf("%0+5d\n", 42);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("%05d\n", -42);
	myp = ft_printf("%05d\n", -42);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("%0+5d\n", -42);
	myp = ft_printf("%0+5d\n", -42);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("%03.2d\n", 0);
	myp = ft_printf("%03.2d\n", 0);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("@moulitest: %.5u\n", 42);
	myp = ft_printf("@moulitest: %.5u\n", 42);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("%%S: %S\n", L"ÁM-^L´");
	myp = ft_printf("%%S: %S\n", L"ÁM-^L´");
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("%ls, %ls\n", L"ÊM-^ZM-^V", L"ÿ≠");
	myp = ft_printf("%ls, %ls\n", L"ÊM-^ZM-^V", L"ÿ≠");
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("%%llO x2 : %llO, %llO\n", (unsigned long long)0, (unsigned long long)__UINT16_MAX__);
	myp = ft_printf("%%llO x2 : %llO, %llO\n", (unsigned long long)0, (unsigned long long)__UINT16_MAX__);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

	p = printf("%%O x2: %O, %O\n", (short)0,(short)__UINT16_MAX__);
	myp = ft_printf("%%O x2: %hO, %hO\n", (short)0,(short)__UINT16_MAX__);
	if (myp != p)
		printf("	myp: %d, p: %d\n", myp, p); fflush(stdout);

}
