	.file	"alignment.c"
	.text
	.globl	init_P1
	.type	init_P1, @function
init_P1:
.LFB24:
	.cfi_startproc
	movw	$2, 32(%rdi)
	movsd	.LC0(%rip), %xmm0
	movsd	%xmm0, 8(%rdi)
	movb	$4, 34(%rdi)
	movl	$0x40a00000, 28(%rdi)
	movb	$6, 35(%rdi)
	movq	$7, 16(%rdi)
	movl	$8, 24(%rdi)
	leaq	-8(%rsp), %rax
	movq	%rax, (%rdi)
	ret
	.cfi_endproc
.LFE24:
	.size	init_P1, .-init_P1
	.section	.rodata.cst8,"aM",@progbits,8
	.align 8
.LC0:
	.long	2576980378
	.long	1073846681
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
