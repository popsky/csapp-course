	.file	"3.24.c"
	.text
	.globl	loop_while
	.type	loop_while, @function
loop_while:
.LFB24:
	.cfi_startproc
	cmpq	%rsi, %rdi
	jge	.L4
	addq	%rsi, %rdi
	addq	%rsi, %rsi
	movl	$1, %eax
.L3:
	imulq	%rdi, %rax
	addq	$1, %rdi
	cmpq	%rsi, %rdi
	jne	.L3
	rep ret
.L4:
	movl	$1, %eax
	ret
	.cfi_endproc
.LFE24:
	.size	loop_while, .-loop_while
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
