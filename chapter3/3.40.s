	.file	"3.40.c"
	.text
	.globl	fix_set_diag
	.type	fix_set_diag, @function
fix_set_diag:
.LFB24:
	.cfi_startproc
	movl	$0, %eax
	jmp	.L2
.L3:
	movq	%rax, %rdx
	salq	$6, %rdx
	addq	%rdi, %rdx
	movl	%esi, (%rdx,%rax,4)
	addq	$1, %rax
.L2:
	cmpq	$15, %rax
	jle	.L3
	rep ret
	.cfi_endproc
.LFE24:
	.size	fix_set_diag, .-fix_set_diag
	.globl	fix_set_diag_opt
	.type	fix_set_diag_opt, @function
fix_set_diag_opt:
.LFB25:
	.cfi_startproc
	movq	%rdi, %rax
	addq	$1088, %rdi
.L5:
	movl	%esi, (%rax)
	addq	$68, %rax
	cmpq	%rdi, %rax
	jne	.L5
	rep ret
	.cfi_endproc
.LFE25:
	.size	fix_set_diag_opt, .-fix_set_diag_opt
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
