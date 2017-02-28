	.file	"3.18.c"
	.text
	.globl	test
	.type	test, @function
test:
.LFB24:
	.cfi_startproc
	leaq	(%rdi,%rsi), %rax
	addq	%rdx, %rax
	cmpq	$-3, %rdi
	jge	.L2
	cmpq	%rdx, %rsi
	jl	.L3
	movq	%rsi, %rax
	imulq	%rdx, %rax
	ret
.L3:
	movq	%rdi, %rax
	imulq	%rsi, %rax
	ret
.L2:
	cmpq	$2, %rdi
	jle	.L4
	movq	%rdi, %rax
	imulq	%rdx, %rax
.L4:
	rep ret
	.cfi_endproc
.LFE24:
	.size	test, .-test
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
