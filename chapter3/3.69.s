	.file	"3.69.c"
	.text
	.globl	test
	.type	test, @function
test:
.LFB24:
	.cfi_startproc
	movl	288(%rsi), %ecx
	addl	(%rsi), %ecx
	leaq	(%rdi,%rdi,4), %rax
	salq	$3, %rax
	addq	%rsi, %rax
	movq	8(%rax), %rdx
	movslq	%ecx, %rcx
	movq	%rcx, 16(%rax,%rdx,8)
	ret
	.cfi_endproc
.LFE24:
	.size	test, .-test
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
