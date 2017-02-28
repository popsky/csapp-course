	.file	"fix_prod_ele.c"
	.text
	.globl	fix_prod_ele
	.type	fix_prod_ele, @function
fix_prod_ele:
.LFB24:
	.cfi_startproc
	salq	$6, %rdx
	addq	%rdx, %rdi
	leaq	(%rsi,%rcx,4), %rcx
	leaq	1024(%rcx), %rsi
	movl	$0, %eax
.L3:
	movl	(%rdi), %edx
	imull	(%rcx), %edx
	addl	%edx, %eax
	addq	$4, %rdi
	addq	$64, %rcx
	cmpq	%rsi, %rcx
	jne	.L3
	rep ret
	.cfi_endproc
.LFE24:
	.size	fix_prod_ele, .-fix_prod_ele
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
