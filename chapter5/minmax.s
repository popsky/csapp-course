	.file	"minmax.c"
	.text
	.p2align 4,,15
	.globl	minmax1
	.type	minmax1, @function
minmax1:
.LFB24:
	.cfi_startproc
	xorl	%eax, %eax
	testq	%rdx, %rdx
	jle	.L1
	.p2align 4,,10
	.p2align 3
.L6:
	movq	(%rdi,%rax,8), %rcx
	movq	(%rsi,%rax,8), %r8
	cmpq	%r8, %rcx
	jle	.L3
	movq	%r8, (%rdi,%rax,8)
	movq	%rcx, (%rsi,%rax,8)
.L3:
	addq	$1, %rax
	cmpq	%rdx, %rax
	jne	.L6
.L1:
	rep ret
	.cfi_endproc
.LFE24:
	.size	minmax1, .-minmax1
	.p2align 4,,15
	.globl	minmax2
	.type	minmax2, @function
minmax2:
.LFB25:
	.cfi_startproc
	xorl	%eax, %eax
	testq	%rdx, %rdx
	jle	.L8
	.p2align 4,,10
	.p2align 3
.L12:
	movq	(%rsi,%rax,8), %rcx
	movq	(%rdi,%rax,8), %r8
	movq	%rcx, %r9
	cmpq	%rcx, %r8
	cmovle	%r8, %r9
	cmovge	%r8, %rcx
	movq	%r9, (%rdi,%rax,8)
	movq	%rcx, (%rsi,%rax,8)
	addq	$1, %rax
	cmpq	%rdx, %rax
	jne	.L12
.L8:
	rep ret
	.cfi_endproc
.LFE25:
	.size	minmax2, .-minmax2
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
