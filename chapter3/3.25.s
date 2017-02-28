	.file	"3.25.c"
	.text
	.p2align 4,,15
	.globl	loop_while2
	.type	loop_while2, @function
loop_while2:
.LFB24:
	.cfi_startproc
	testq	%rsi, %rsi
	movq	%rsi, %rax
	jle	.L4
	.p2align 4,,10
	.p2align 3
.L3:
	subq	%rdi, %rsi
	imulq	%rdi, %rax
	testq	%rsi, %rsi
	jg	.L3
	rep ret
.L4:
	rep ret
	.cfi_endproc
.LFE24:
	.size	loop_while2, .-loop_while2
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
