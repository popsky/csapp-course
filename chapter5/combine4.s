	.file	"combine4.c"
	.text
	.globl	combine4
	.type	combine4, @function
combine4:
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
	movq	%rdi, %rbp
	movq	%rsi, %r12
	movl	$0, %eax
	call	vec_length
	movslq	%eax, %rbx
	movq	%rbp, %rdi
	movl	$0, %eax
	call	get_vec_start
	cltq
	movl	$0, %ecx
	movl	$0, %edx
	jmp	.L2
.L3:
	addl	(%rax,%rdx,4), %ecx
	addq	$1, %rdx
.L2:
	cmpq	%rbx, %rdx
	jl	.L3
	movl	%ecx, (%r12)
	popq	%rbx
	.cfi_def_cfa_offset 24
	popq	%rbp
	.cfi_def_cfa_offset 16
	popq	%r12
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE24:
	.size	combine4, .-combine4
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
