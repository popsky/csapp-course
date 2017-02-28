	.file	"3.13.c"
	.text
	.globl	com1
	.type	com1, @function
com1:
.LFB24:
	.cfi_startproc
	cmpq	%rsi, %rdi
	setne	%al
	movzbl	%al, %eax
	ret
	.cfi_endproc
.LFE24:
	.size	com1, .-com1
	.globl	com2
	.type	com2, @function
com2:
.LFB25:
	.cfi_startproc
	cmpq	%rsi, %rdi
	setne	%al
	movzbl	%al, %eax
	ret
	.cfi_endproc
.LFE25:
	.size	com2, .-com2
	.globl	com3
	.type	com3, @function
com3:
.LFB26:
	.cfi_startproc
	cmpq	%rsi, %rdi
	setne	%al
	movzbl	%al, %eax
	ret
	.cfi_endproc
.LFE26:
	.size	com3, .-com3
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
