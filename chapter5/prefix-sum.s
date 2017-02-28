	.file	"prefix-sum.c"
	.text
	.globl	psum1
	.type	psum1, @function
psum1:
.LFB24:
	.cfi_startproc
	xorps	%xmm0, %xmm0
	movl	$0, %eax
	jmp	.L2
.L3:
	addss	(%rdi,%rax,4), %xmm0
	movss	%xmm0, (%rsi,%rax,4)
	addq	$1, %rax
.L2:
	cmpq	%rdx, %rax
	jl	.L3
	rep ret
	.cfi_endproc
.LFE24:
	.size	psum1, .-psum1
	.globl	psum2
	.type	psum2, @function
psum2:
.LFB25:
	.cfi_startproc
	movss	(%rdi), %xmm0
	movss	%xmm0, (%rsi)
	movl	$1, %eax
	leaq	-1(%rdx), %r8
	jmp	.L5
.L6:
	leaq	0(,%rax,4), %rcx
	movss	(%rdi,%rax,4), %xmm0
	addss	-4(%rsi,%rcx), %xmm0
	movss	%xmm0, (%rsi,%rcx)
	leaq	1(%rax), %rcx
	addss	(%rdi,%rcx,4), %xmm0
	movss	%xmm0, (%rsi,%rcx,4)
	addq	$2, %rax
.L5:
	cmpq	%rax, %r8
	jg	.L6
	cmpq	%rdx, %rax
	jge	.L4
	leaq	0(,%rax,4), %rdx
	movss	(%rdi,%rax,4), %xmm0
	addss	-4(%rsi,%rdx), %xmm0
	movss	%xmm0, (%rsi,%rdx)
.L4:
	rep ret
	.cfi_endproc
.LFE25:
	.size	psum2, .-psum2
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
