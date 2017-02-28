	.file	"3.43.c"
	.text
	.globl	get
	.type	get, @function
get:
.LFB24:
	.cfi_startproc
	movq	8(%rdi), %rax
	movzbl	(%rax), %eax
	movb	%al, (%rsi)
	ret
	.cfi_endproc
.LFE24:
	.size	get, .-get
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
