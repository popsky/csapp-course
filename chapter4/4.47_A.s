	.file	"4.47_A.c"
	.text
	.globl	bubble_p
	.type	bubble_p, @function
bubble_p:
.LFB24:
	.cfi_startproc
	leaq	-8(%rdi,%rsi,8), %rsi
	jmp	.L2
.L4:
	movq	(%rax), %rdx
	movq	8(%rax), %rcx
	cmpq	%rcx, %rdx
	jle	.L3
	movq	%rcx, (%rax)
	movq	%rdx, 8(%rax)
.L3:
	addq	$8, %rax
	jmp	.L5
.L6:
	movq	%rdi, %rax
.L5:
	cmpq	%rsi, %rax
	jb	.L4
	subq	$8, %rsi
.L2:
	cmpq	%rdi, %rsi
	jne	.L6
	rep ret
	.cfi_endproc
.LFE24:
	.size	bubble_p, .-bubble_p
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"%ld "
	.text
	.globl	main
	.type	main, @function
main:
.LFB25:
	.cfi_startproc
	pushq	%rbx
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
	subq	$80, %rsp
	.cfi_def_cfa_offset 96
	movq	$5, (%rsp)
	movq	$3, 8(%rsp)
	movq	$10, 16(%rsp)
	movq	$19, 24(%rsp)
	movq	$44, 32(%rsp)
	movq	$2, 40(%rsp)
	movq	$4, 48(%rsp)
	movq	$0, 56(%rsp)
	movq	$1, 64(%rsp)
	movq	$-1, 72(%rsp)
	movl	$10, %esi
	movq	%rsp, %rdi
	call	bubble_p
	movl	$0, %ebx
	jmp	.L8
.L9:
	movslq	%ebx, %rax
	movq	(%rsp,%rax,8), %rdx
	movl	$.LC0, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	__printf_chk
	addl	$1, %ebx
.L8:
	cmpl	$9, %ebx
	jle	.L9
	addq	$80, %rsp
	.cfi_def_cfa_offset 16
	popq	%rbx
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE25:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
