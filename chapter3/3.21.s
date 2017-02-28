	.file	"3.21.c"
	.text
	.globl	test
	.type	test, @function
test:
.LFB24:
	.cfi_startproc
	testq	%rsi, %rsi
	jle	.L2
	leaq	(%rdi,%rsi), %rax
	movq	%rsi, %rdx
	subq	%rdi, %rdx
	cmpq	%rsi, %rdi
	cmovl	%rdx, %rax
	ret
.L2:
	leaq	0(,%rdi,8), %rax
	addq	%rsi, %rdi
	cmpq	$-1, %rsi
	cmovl	%rdi, %rax
	ret
	.cfi_endproc
.LFE24:
	.size	test, .-test
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
