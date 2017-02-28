	.file	"3.35.c"
	.text
	.globl	rfun
	.type	rfun, @function
rfun:
.LFB24:
	.cfi_startproc
	pushq	%rbx
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
	movq	%rdi, %rbx
	testq	%rdi, %rdi
	je	.L3
	shrq	$2, %rdi
	call	rfun
	addq	%rbx, %rax
	jmp	.L2
.L3:
	movl	$0, %eax
.L2:
	popq	%rbx
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE24:
	.size	rfun, .-rfun
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
