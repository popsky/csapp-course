	.file	"3.28.c"
	.text
	.globl	fun_b
	.type	fun_b, @function
fun_b:
.LFB24:
	.cfi_startproc
	movl	$64, %edx
	movl	$0, %eax
.L3:
	movq	%rdi, %rcx
	andl	$1, %ecx
	addq	%rax, %rax
	orq	%rcx, %rax
	shrq	%rdi
	subq	$1, %rdx
	jne	.L3
	rep ret
	.cfi_endproc
.LFE24:
	.size	fun_b, .-fun_b
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
