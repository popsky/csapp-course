	.file	"3.65.c"
	.text
	.globl	transpose
	.type	transpose, @function
transpose:
.LFB24:
	.cfi_startproc
	leaq	120(%rdi), %r10
	leaq	8(%rdi), %r9
	subq	$-128, %rdi
	movl	$0, %r8d
	jmp	.L2
.L6:
	movq	(%rdx), %rcx
	movq	(%rax), %rsi
	movq	%rsi, (%rdx)
	movq	%rcx, (%rax)
	addq	$8, %rdx
	addq	$120, %rax
	cmpq	%rdi, %rax
	jne	.L6
.L5:
	addq	$120, %r10
	addq	$8, %r9
	subq	$-128, %rdi
.L2:
	addq	$1, %r8
	cmpq	$15, %r8
	je	.L1
	testq	%r8, %r8
	jle	.L5
	movq	%r9, %rax
	movq	%r10, %rdx
	jmp	.L6
.L1:
	.p2align 4,,2
	rep ret
	.cfi_endproc
.LFE24:
	.size	transpose, .-transpose
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
