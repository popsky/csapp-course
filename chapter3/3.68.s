	.file	"3.68.c"
	.text
	.globl	setVal
	.type	setVal, @function
setVal:
.LFB24:
	.cfi_startproc
	movslq	8(%rsi), %rax
	addq	32(%rsi), %rax
	movq	%rax, 184(%rdi)
	ret
	.cfi_endproc
.LFE24:
	.size	setVal, .-setVal
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
