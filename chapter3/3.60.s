	.file	"3.60.c"
	.text
	.globl	loop
	.type	loop, @function
loop:
.LFB24:
	.cfi_startproc
	movl	$1, %edx
	movl	$0, %eax
	movzbl	%sil, %ecx
	jmp	.L2
.L3:
	movq	%rdx, %r8
	andq	%rdi, %r8
	orq	%r8, %rax
	salq	%cl, %rdx
.L2:
	testq	%rdx, %rdx
	jg	.L3
	rep ret
	.cfi_endproc
.LFE24:
	.size	loop, .-loop
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
