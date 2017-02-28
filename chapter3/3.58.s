	.file	"3.58.c"
	.text
	.globl	decode2
	.type	decode2, @function
decode2:
.LFB24:
	.cfi_startproc
	subq	%rdx, %rsi
	movq	%rdi, %rax
	imulq	%rsi, %rax
	salq	$63, %rsi
	sarq	$63, %rsi
	xorq	%rsi, %rax
	ret
	.cfi_endproc
.LFE24:
	.size	decode2, .-decode2
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
