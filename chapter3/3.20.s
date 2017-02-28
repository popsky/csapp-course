	.file	"3.20.c"
	.text
	.globl	arith
	.type	arith, @function
arith:
.LFB24:
	.cfi_startproc
	leaq	7(%rdi), %rax
	testq	%rdi, %rdi
	cmovns	%rdi, %rax
	sarq	$3, %rax
	ret
	.cfi_endproc
.LFE24:
	.size	arith, .-arith
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
