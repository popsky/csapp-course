	.file	"3.25.c"
	.text
	.globl	loop_while2
	.type	loop_while2, @function
loop_while2:
.LFB24:
	.cfi_startproc
	movq	%rsi, %rax
	jmp	.L2
.L3:
	movq	%rdi, %rax
	imulq	%rsi, %rax
	subq	%rdi, %rsi
.L2:
	testq	%rsi, %rsi
	jg	.L3
	rep ret
	.cfi_endproc
.LFE24:
	.size	loop_while2, .-loop_while2
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
