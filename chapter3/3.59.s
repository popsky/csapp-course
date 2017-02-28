	.file	"3.59.c"
	.text
	.globl	store_prod
	.type	store_prod, @function
store_prod:
.LFB24:
	.cfi_startproc
	movq	%rdx, %rax
	mulq	%rsi
	movq	%rax, (%rdi)
	movq	%rdx, 8(%rdi)
	ret
	.cfi_endproc
.LFE24:
	.size	store_prod, .-store_prod
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
