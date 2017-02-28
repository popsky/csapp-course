	.file	"fact_do.c"
	.text
	.p2align 4,,15
	.globl	fact_do
	.type	fact_do, @function
fact_do:
.LFB24:
	.cfi_startproc
	movl	$1, %eax
	.p2align 4,,10
	.p2align 3
.L3:
	imulq	%rdi, %rax
	subq	$1, %rdi
	cmpq	$1, %rdi
	jg	.L3
	rep ret
	.cfi_endproc
.LFE24:
	.size	fact_do, .-fact_do
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
