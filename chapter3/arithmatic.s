	.file	"arithmatic.c"
	.text
	.globl	arith
	.type	arith, @function
arith:
.LFB24:
	.cfi_startproc
	xorq	%rsi, %rdi
	leaq	(%rdx,%rdx,2), %rax
	salq	$4, %rax
	andl	$252645135, %edi
	subq	%rdi, %rax
	ret
	.cfi_endproc
.LFE24:
	.size	arith, .-arith
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
