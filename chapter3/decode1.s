	.file	"decode1.c"
	.text
	.globl	decode1
	.type	decode1, @function
decode1:
.LFB24:
	.cfi_startproc
	movq	(%rdx), %rax
	movq	(%rsi), %rcx
	movq	%rcx, (%rdx)
	movq	(%rdi), %rdx
	movq	%rdx, (%rsi)
	movq	%rax, (%rdi)
	ret
	.cfi_endproc
.LFE24:
	.size	decode1, .-decode1
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
