	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 10
	.globl	_main
	.align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp0:
	.cfi_def_cfa_offset 16
Ltmp1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp2:
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	leaq	L_.str(%rip), %rax
	movl	$0, -4(%rbp)
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rdi
	callq	_ft_putendl
	movq	-16(%rbp), %rax
	movb	$79, (%rax)
	movq	-16(%rbp), %rdi
	callq	_ft_putendl
	movq	-16(%rbp), %rax
	movb	$85, 1(%rax)
	movq	-16(%rbp), %rdi
	callq	_ft_putendl
	leaq	L_.str1(%rip), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rdi
	callq	_ft_putendl
	leaq	L_.str2(%rip), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rdi
	callq	_ft_putendl
	xorl	%eax, %eax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"123456789000000"

L_.str1:                                ## @.str1
	.asciz	"--345"

L_.str2:                                ## @.str2
	.asciz	"1234567890000"


.subsections_via_symbols
