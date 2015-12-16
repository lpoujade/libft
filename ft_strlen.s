	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 10
	.globl	_ft_strlen
	.align	4, 0x90
_ft_strlen:                             ## @ft_strlen
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
	movq	%rdi, -8(%rbp)
	movl	$0, -12(%rbp)
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	movslq	-12(%rbp), %rax
	movq	-8(%rbp), %rcx
	cmpb	$0, (%rcx,%rax)
	je	LBB0_3
## BB#2:                                ##   in Loop: Header=BB0_1 Depth=1
	movl	-12(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -12(%rbp)
	jmp	LBB0_1
LBB0_3:
	movslq	-12(%rbp), %rax
	popq	%rbp
	retq
	.cfi_endproc


.subsections_via_symbols
