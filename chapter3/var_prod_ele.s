	.file	"var_prod_ele.c"
	.text
	.globl	var_prod_ele
	.type	var_prod_ele, @function
var_prod_ele:
.LFB24:
	.cfi_startproc
	testq	%rdi, %rdi
	jle	.L4
	salq	$2, %rcx
	imulq	%rdi, %rcx
	addq	%rcx, %rsi
	leaq	0(,%rdi,4), %r9
	leaq	(%rdx,%r8,4), %rcx
	movl	$0, %eax
	movl	$0, %edx
.L3:
	movl	(%rsi,%rdx,4), %r8d
	imull	(%rcx), %r8d
	addl	%r8d, %eax
	addq	$1, %rdx
	addq	%r9, %rcx
	cmpq	%rdi, %rdx
	jne	.L3
	rep ret
.L4:
	movl	$0, %eax
	ret
	.cfi_endproc
.LFE24:
	.size	var_prod_ele, .-var_prod_ele
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
