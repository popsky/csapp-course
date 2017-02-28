	.file	"combine3.c"
	.text
	.p2align 4,,15
	.globl	combine3
	.type	combine3, @function
combine3:
.LFB24:
	.cfi_startproc
	pushq	%r12
	.cfi_def_cfa_offset 16
	.cfi_offset 12, -16
	xorl	%eax, %eax
	movq	%rdi, %r12
	pushq	%rbp
	.cfi_def_cfa_offset 24
	.cfi_offset 6, -24
	movq	%rsi, %rbp
	pushq	%rbx
	.cfi_def_cfa_offset 32
	.cfi_offset 3, -32
	call	vec_length
	movq	%r12, %rdi
	movslq	%eax, %rbx
	xorl	%eax, %eax
	call	get_vec_start
	movsd	.LC0(%rip), %xmm0
	xorl	%edx, %edx
	testq	%rbx, %rbx
	cltq
	movsd	%xmm0, 0(%rbp)
	jle	.L1
	.p2align 4,,10
	.p2align 3
.L5:
	mulsd	(%rax,%rdx,8), %xmm0
	addq	$1, %rdx
	cmpq	%rdx, %rbx
	movsd	%xmm0, 0(%rbp)
	jg	.L5
.L1:
	popq	%rbx
	.cfi_def_cfa_offset 24
	popq	%rbp
	.cfi_def_cfa_offset 16
	popq	%r12
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE24:
	.size	combine3, .-combine3
	.section	.rodata.cst8,"aM",@progbits,8
	.align 8
.LC0:
	.long	0
	.long	1072693248
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
