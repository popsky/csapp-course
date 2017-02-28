	.file	"vframe.c"
	.text
	.globl	vframe
	.type	vframe, @function
vframe:
.LFB24:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	leaq	22(,%rdi,8), %rax
	andq	$-16, %rax
	subq	%rax, %rsp
	leaq	7(%rsp), %rax
	shrq	$3, %rax
	leaq	0(,%rax,8), %r8
	movq	%r8, %rcx
	leaq	-8(%rbp), %r9
	movq	%r9, 0(,%rax,8)
	movq	$1, -8(%rbp)
	jmp	.L2
.L3:
	movq	%rdx, (%rcx,%rax,8)
	addq	$1, %rax
	movq	%rax, -8(%rbp)
.L2:
	movq	-8(%rbp), %rax
	cmpq	%rdi, %rax
	jl	.L3
	movq	(%r8,%rsi,8), %rax
	movq	(%rax), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE24:
	.size	vframe, .-vframe
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
