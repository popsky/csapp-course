	.file	"3.46.c"
	.text
	.globl	get_line
	.type	get_line, @function
get_line:
.LFB24:
	.cfi_startproc
	pushq	%rbx
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
	subq	$16, %rsp
	.cfi_def_cfa_offset 32
	movq	%fs:40, %rax
	movq	%rax, 8(%rsp)
	xorl	%eax, %eax
	movl	$4, %esi
	movq	%rsp, %rdi
	call	__gets_chk
	movq	%rsp, %rdi
	movl	$0, %eax
	movq	$-1, %rcx
	repnz scasb
	notq	%rcx
	leaq	-1(%rcx), %rdi
	call	malloca
	movslq	%eax, %rbx
	movq	%rsp, %rsi
	movq	%rbx, %rdi
	call	strcpy
	movq	8(%rsp), %rdx
	xorq	%fs:40, %rdx
	je	.L2
	call	__stack_chk_fail
.L2:
	movq	%rbx, %rax
	addq	$16, %rsp
	.cfi_def_cfa_offset 16
	popq	%rbx
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE24:
	.size	get_line, .-get_line
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
