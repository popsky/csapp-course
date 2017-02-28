	.file	"3.56.c"
	.text
	.globl	simplefun
	.type	simplefun, @function
simplefun:
.LFB27:
	.cfi_startproc
	movsd	.LC0(%rip), %xmm1
	andpd	%xmm1, %xmm0
	ret
	.cfi_endproc
.LFE27:
	.size	simplefun, .-simplefun
	.section	.rodata.cst16,"aM",@progbits,16
	.align 16
.LC0:
	.long	4294967295
	.long	2147483647
	.long	0
	.long	0
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
