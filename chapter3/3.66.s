	.file	"3.66.c"
	.text
	.globl	sum_col
	.type	sum_col, @function
sum_col:
.LFB24:
	.cfi_startproc
	leaq	1(,%rdi,4), %r8
	leaq	(%rdi,%rdi,2), %rax
	movq	%rax, %rdi
	testq	%rax, %rax
	jle	.L4
	salq	$3, %r8
	leaq	(%rsi,%rdx,8), %rcx
	movl	$0, %eax
	movl	$0, %edx
.L3:
	addq	(%rcx), %rax
	addq	$1, %rdx
	addq	%r8, %rcx
	cmpq	%rdi, %rdx
	jne	.L3
	rep ret
.L4:
	movl	$0, %eax
	ret
	.cfi_endproc
.LFE24:
	.size	sum_col, .-sum_col
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
