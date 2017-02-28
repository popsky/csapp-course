	.file	"fcvt.c"
	.text
	.globl	fcvt
	.type	fcvt, @function
fcvt:
.LFB24:
	.cfi_startproc
	movss	(%rsi), %xmm0
	movq	(%rcx), %rax
	cvttsd2siq	(%rdx), %r8
	movq	%r8, (%rcx)
	cvtsi2ss	%edi, %xmm1
	movss	%xmm1, (%rsi)
	cvtsi2sdq	%rax, %xmm1
	movsd	%xmm1, (%rdx)
	unpcklps	%xmm0, %xmm0
	cvtps2pd	%xmm0, %xmm0
	ret
	.cfi_endproc
.LFE24:
	.size	fcvt, .-fcvt
	.globl	main
	.type	main, @function
main:
.LFB25:
	.cfi_startproc
	subq	$32, %rsp
	.cfi_def_cfa_offset 40
	movl	$0x3f99999a, 12(%rsp)
	movsd	.LC1(%rip), %xmm1
	movsd	%xmm1, 16(%rsp)
	movq	$1024, 24(%rsp)
	leaq	24(%rsp), %rcx
	leaq	16(%rsp), %rdx
	leaq	12(%rsp), %rsi
	movl	$10, %edi
	call	fcvt
	addq	$32, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE25:
	.size	main, .-main
	.section	.rodata.cst8,"aM",@progbits,8
	.align 8
.LC1:
	.long	3470333575
	.long	1073042423
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
