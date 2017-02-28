	.file	"absdiff.c"
	.text
	.globl	absdiff
	.type	absdiff, @function
absdiff:
.LFB24:
	.cfi_startproc
	movq	%rsi, %rax
	subq	%rdi, %rax
	movq	%rdi, %rdx
	subq	%rsi, %rdx
	cmpq	%rsi, %rdi
	cmovge	%rdx, %rax
	ret
	.cfi_endproc
.LFE24:
	.size	absdiff, .-absdiff
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
