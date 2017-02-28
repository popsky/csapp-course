	.file	"3.41.c"
	.text
	.globl	sp_init
	.type	sp_init, @function
sp_init:
.LFB24:
	.cfi_startproc
	movl	12(%rdi), %eax
	movl	%eax, 8(%rdi)
	leaq	8(%rdi), %rax
	movq	%rax, (%rdi)
	movq	%rdi, 16(%rdi)
	ret
	.cfi_endproc
.LFE24:
	.size	sp_init, .-sp_init
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
