	.file	"combine1.c"
	.text
	.p2align 4,,15
	.globl	combine1
	.type	combine1, @function
combine1:
.LFB24:
	.cfi_startproc
	pushq	%r12
	.cfi_def_cfa_offset 16
	.cfi_offset 12, -16
	movq	%rdi, %r12
	pushq	%rbp
	.cfi_def_cfa_offset 24
	.cfi_offset 6, -24
	movq	%rsi, %rbp
	pushq	%rbx
	.cfi_def_cfa_offset 32
	.cfi_offset 3, -32
	xorl	%ebx, %ebx
	subq	$16, %rsp
	.cfi_def_cfa_offset 48
	movl	$0, (%rsi)
	jmp	.L2
	.p2align 4,,10
	.p2align 3
.L3:
	leaq	12(%rsp), %rdx
	movq	%rbx, %rsi
	movq	%r12, %rdi
	xorl	%eax, %eax
	addq	$1, %rbx
	call	get_vec_element
	movl	12(%rsp), %eax
	addl	%eax, 0(%rbp)
.L2:
	xorl	%eax, %eax
	movq	%r12, %rdi
	call	vec_length
	cltq
	cmpq	%rax, %rbx
	jl	.L3
	addq	$16, %rsp
	.cfi_def_cfa_offset 32
	popq	%rbx
	.cfi_def_cfa_offset 24
	popq	%rbp
	.cfi_def_cfa_offset 16
	popq	%r12
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE24:
	.size	combine1, .-combine1
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
