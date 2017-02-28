	.file	"store_uprod.c"
	.text
	.globl	store_uprod
	.type	store_uprod, @function
store_uprod:
.LFB28:
	.cfi_startproc
	movq	%rsi, %rax
	mulq	%rdx
	movq	%rax, (%rdi)
	movq	%rdx, 8(%rdi)
	ret
	.cfi_endproc
.LFE28:
	.size	store_uprod, .-store_uprod
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
