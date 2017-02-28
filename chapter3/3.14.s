	.file	"3.14.c"
	.text
	.globl	com_Al
	.type	com_Al, @function
com_Al:
.LFB24:
	.cfi_startproc
	movq	%rdi, %rax
	notq	%rax
	shrq	$63, %rax
	ret
	.cfi_endproc
.LFE24:
	.size	com_Al, .-com_Al
	.globl	com_Aul
	.type	com_Aul, @function
com_Aul:
.LFB25:
	.cfi_startproc
	movl	$1, %eax
	ret
	.cfi_endproc
.LFE25:
	.size	com_Aul, .-com_Aul
	.globl	com_Ap
	.type	com_Ap, @function
com_Ap:
.LFB26:
	.cfi_startproc
	movl	$1, %eax
	ret
	.cfi_endproc
.LFE26:
	.size	com_Ap, .-com_Ap
	.globl	com_B
	.type	com_B, @function
com_B:
.LFB27:
	.cfi_startproc
	testw	%di, %di
	sete	%al
	ret
	.cfi_endproc
.LFE27:
	.size	com_B, .-com_B
	.globl	com_C
	.type	com_C, @function
com_C:
.LFB28:
	.cfi_startproc
	testb	%dil, %dil
	setne	%al
	ret
	.cfi_endproc
.LFE28:
	.size	com_C, .-com_C
	.globl	com_D
	.type	com_D, @function
com_D:
.LFB29:
	.cfi_startproc
	testl	%edi, %edi
	setle	%al
	ret
	.cfi_endproc
.LFE29:
	.size	com_D, .-com_D
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
