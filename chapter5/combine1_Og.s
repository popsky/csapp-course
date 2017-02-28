	.file	"combine1.c"
	.text
	.globl	combine1
	.type	combine1, @function
combine1:
.LFB24:
	.cfi_startproc
	pushq	%r12
	.cfi_def_cfa_offset 16
	.cfi_offset 12, -16
	pushq	%rbp
	.cfi_def_cfa_offset 24
	.cfi_offset 6, -24
	pushq	%rbx
	.cfi_def_cfa_offset 32
	.cfi_offset 3, -32
	subq	$16, %rsp
	.cfi_def_cfa_offset 48
	movq	%rdi, %r12
	movq	%rsi, %rbp
	movl	$0, (%rsi)
	movl	$0, %ebx
	jmp	.L2
.L3:
	leaq	12(%rsp), %rdx
	movq	%rbx, %rsi
	movq	%r12, %rdi
	movl	$0, %eax
	call	get_vec_element
	movl	12(%rsp), %eax
	addl	%eax, 0(%rbp)
	addq	$1, %rbx
.L2:
	movq	%r12, %rdi
	movl	$0, %eax
	call	vec_length
	cltq
	cmpq	%rbx, %rax
	jg	.L3
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
