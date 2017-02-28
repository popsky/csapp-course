	.file	"5.7.c"
	.text
	.globl	combine5
	.type	combine5, @function
combine5:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movq	%rdi, -56(%rbp)
	movq	%rsi, -64(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	vec_length
	cltq
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	subq	$4, %rax
	movq	%rax, -16(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	get_vec_start
	cltq
	movq	%rax, -8(%rbp)
	movl	$0, -36(%rbp)
	movq	$0, -32(%rbp)
	jmp	.L2
.L3:
	movq	-32(%rbp), %rax
	leaq	0(,%rax,4), %rdx
	movq	-8(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-36(%rbp), %eax
	addl	%eax, %edx
	movq	-32(%rbp), %rax
	addq	$1, %rax
	leaq	0(,%rax,4), %rcx
	movq	-8(%rbp), %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	addl	%edx, %eax
	movl	%eax, -36(%rbp)
	movq	-32(%rbp), %rax
	addq	$2, %rax
	leaq	0(,%rax,4), %rdx
	movq	-8(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-36(%rbp), %eax
	addl	%eax, %edx
	movq	-32(%rbp), %rax
	addq	$3, %rax
	leaq	0(,%rax,4), %rcx
	movq	-8(%rbp), %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	addl	%edx, %eax
	movl	%eax, -36(%rbp)
	movq	-32(%rbp), %rax
	addq	$4, %rax
	leaq	0(,%rax,4), %rdx
	movq	-8(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	addl	%eax, -36(%rbp)
	addq	$5, -32(%rbp)
.L2:
	movq	-32(%rbp), %rax
	cmpq	-16(%rbp), %rax
	jl	.L3
	jmp	.L4
.L5:
	movq	-32(%rbp), %rax
	leaq	0(,%rax,4), %rdx
	movq	-8(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	addl	%eax, -36(%rbp)
	addq	$1, -32(%rbp)
.L4:
	movq	-32(%rbp), %rax
	cmpq	-24(%rbp), %rax
	jl	.L5
	movq	-64(%rbp), %rax
	movl	-36(%rbp), %edx
	movl	%edx, (%rax)
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	combine5, .-combine5
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
