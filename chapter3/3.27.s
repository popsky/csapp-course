	.file	"3.27.c"
	.text
	.globl	fact_for_guard_goto
	.type	fact_for_guard_goto, @function
fact_for_guard_goto:
.LFB24:
	.cfi_startproc
	cmpq	$1, %rdi
	jle	.L4
	movl	$1, %eax
	movl	$2, %edx
.L3:
	imulq	%rdx, %rax
	addq	$1, %rdx
	cmpq	%rdi, %rdx
	jle	.L3
	rep ret
.L4:
	movl	$1, %eax
.L2:
	ret
	.cfi_endproc
.LFE24:
	.size	fact_for_guard_goto, .-fact_for_guard_goto
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
