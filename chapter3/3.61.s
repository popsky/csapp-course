	.file	"3.61.c"
	.text
	.globl	cread_alt
	.type	cread_alt, @function
cread_alt:
.LFB24:
	.cfi_startproc
	movq	$0, -8(%rsp)
	leaq	-8(%rsp), %rax
	testq	%rdi, %rdi
	cmove	%rax, %rdi
	movq	(%rdi), %rax
	ret
	.cfi_endproc
.LFE24:
	.size	cread_alt, .-cread_alt
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
