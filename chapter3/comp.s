	.file	"comp.c"
	.text
	.globl	comp
	.type	comp, @function
comp:
.LFB24:
	.cfi_startproc
	cmpq	%rsi, %rdi
	setb	%al
	movzbl	%al, %eax
	ret
	.cfi_endproc
.LFE24:
	.size	comp, .-comp
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
