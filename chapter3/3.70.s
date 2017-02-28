	.file	"3.70.c"
	.text
	.globl	proc
	.type	proc, @function
proc:
.LFB24:
	.cfi_startproc
	movq	8(%rdi), %rax
	movq	(%rax), %rdx
	movq	(%rdx), %rdx
	subq	8(%rax), %rdx
	movq	%rdx, (%rdi)
	ret
	.cfi_endproc
.LFE24:
	.size	proc, .-proc
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
